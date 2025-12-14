#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_1 = -61722966;
_Bool var_7 = (_Bool)0;
unsigned long long int var_8 = 2903241244386230052ULL;
short var_11 = (short)-5854;
_Bool var_12 = (_Bool)1;
int var_13 = -392289902;
short var_15 = (short)13975;
int zero = 0;
int var_18 = -447927988;
_Bool var_19 = (_Bool)0;
_Bool var_20 = (_Bool)1;
signed char var_21 = (signed char)-50;
int var_22 = -137944811;
unsigned short var_23 = (unsigned short)54680;
unsigned char var_24 = (unsigned char)122;
signed char arr_0 [21] ;
signed char arr_1 [21] ;
_Bool arr_2 [21] [21] ;
unsigned int arr_3 [21] ;
signed char arr_14 [11] ;
unsigned short arr_16 [11] [11] [11] [11] ;
signed char arr_4 [21] ;
unsigned int arr_17 [11] [11] ;
signed char arr_18 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (signed char)76;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (signed char)-54;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = 2058826030U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_14 [i_0] = (signed char)-55;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = (unsigned short)4793;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = (signed char)75;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_17 [i_0] [i_1] = (i_0 % 2 == 0) ? 2927814178U : 3166490625U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_18 [i_0] = (signed char)88;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_17 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_18 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
