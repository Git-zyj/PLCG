#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 350543843U;
signed char var_1 = (signed char)-52;
unsigned long long int var_3 = 15834500308467734509ULL;
unsigned char var_4 = (unsigned char)235;
unsigned long long int var_8 = 1149425409469474799ULL;
_Bool var_12 = (_Bool)1;
int zero = 0;
signed char var_13 = (signed char)32;
int var_14 = 1963536431;
unsigned char var_15 = (unsigned char)109;
unsigned long long int var_16 = 4019466883076058141ULL;
_Bool var_17 = (_Bool)1;
signed char var_18 = (signed char)87;
unsigned char var_19 = (unsigned char)38;
unsigned short var_20 = (unsigned short)52585;
signed char var_21 = (signed char)-44;
unsigned int var_22 = 2274841265U;
short var_23 = (short)-30462;
unsigned short var_24 = (unsigned short)13464;
int arr_0 [23] ;
short arr_1 [23] ;
signed char arr_2 [23] ;
unsigned long long int arr_3 [23] [23] [23] ;
unsigned long long int arr_4 [23] [23] ;
signed char arr_8 [24] [24] ;
int arr_7 [23] [23] [23] ;
unsigned char arr_10 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = 1094489852;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (short)23880;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (signed char)-124;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 12028342576013994252ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_4 [i_0] [i_1] = 8410407362855268754ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_8 [i_0] [i_1] = (signed char)108;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = -1570026427;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? (unsigned char)23 : (unsigned char)62;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_7 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
