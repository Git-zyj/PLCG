#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 2078736390404570060ULL;
unsigned short var_2 = (unsigned short)21135;
unsigned int var_4 = 1893314930U;
unsigned long long int var_5 = 3616279897307414769ULL;
unsigned short var_6 = (unsigned short)32013;
unsigned int var_8 = 999920264U;
unsigned char var_10 = (unsigned char)122;
long long int var_11 = -5999499454993924819LL;
unsigned int var_12 = 356721030U;
unsigned long long int var_13 = 1355581803975219898ULL;
_Bool var_14 = (_Bool)0;
unsigned char var_15 = (unsigned char)215;
unsigned int var_16 = 736837793U;
_Bool var_17 = (_Bool)1;
int zero = 0;
int var_18 = 471100415;
unsigned char var_19 = (unsigned char)166;
unsigned short var_20 = (unsigned short)35809;
long long int var_21 = -4281315010967728768LL;
signed char var_22 = (signed char)49;
unsigned short var_23 = (unsigned short)33606;
unsigned short var_24 = (unsigned short)28147;
unsigned int arr_1 [16] [16] ;
long long int arr_2 [16] ;
signed char arr_4 [16] [16] ;
unsigned int arr_13 [23] [23] ;
int arr_7 [16] [16] [16] ;
_Bool arr_8 [16] [16] ;
unsigned long long int arr_11 [16] ;
signed char arr_12 [16] ;
unsigned short arr_15 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = 3903289331U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = 604931134066881769LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)-12;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_13 [i_0] [i_1] = 3437327729U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 1768703354 : -1420855864;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_8 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_11 [i_0] = 5854290650282093449ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_12 [i_0] = (signed char)5;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_15 [i_0] = (unsigned short)20178;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_7 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_15 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
