#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-31172;
unsigned long long int var_2 = 15068380361010074505ULL;
unsigned int var_7 = 3446080386U;
unsigned char var_8 = (unsigned char)88;
unsigned char var_11 = (unsigned char)101;
long long int var_14 = -4822491588230952563LL;
int zero = 0;
unsigned int var_17 = 2753765451U;
unsigned long long int var_18 = 11417646070376371910ULL;
long long int var_19 = -6664301039820535700LL;
short var_20 = (short)8523;
signed char var_21 = (signed char)79;
int var_22 = 675367099;
_Bool var_23 = (_Bool)0;
short var_24 = (short)17048;
int var_25 = 257817058;
int var_26 = -1023414395;
signed char var_27 = (signed char)20;
unsigned char var_28 = (unsigned char)254;
long long int arr_0 [23] ;
_Bool arr_1 [23] ;
short arr_2 [23] [23] ;
int arr_3 [23] ;
int arr_4 [23] ;
unsigned long long int arr_6 [23] ;
_Bool arr_11 [23] [23] ;
unsigned char arr_14 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = -4860175244065522830LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_2 [i_0] [i_1] = (short)30667;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = -190452040;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = 1533124880;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = 12757279407612639736ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_11 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_14 [i_0] = (unsigned char)119;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_14 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
