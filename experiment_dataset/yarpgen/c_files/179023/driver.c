#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)9620;
unsigned char var_1 = (unsigned char)9;
unsigned char var_2 = (unsigned char)151;
int var_3 = 1320498109;
long long int var_5 = -8005461015513707384LL;
unsigned long long int var_6 = 11918383991605687641ULL;
signed char var_7 = (signed char)17;
unsigned long long int var_8 = 5785199999168177275ULL;
long long int var_9 = 2914482248439053712LL;
unsigned long long int var_10 = 16328145352783810939ULL;
short var_11 = (short)11376;
signed char var_13 = (signed char)5;
int zero = 0;
short var_14 = (short)-29045;
long long int var_15 = 6832159849951345756LL;
_Bool var_16 = (_Bool)0;
short var_17 = (short)15892;
unsigned long long int var_18 = 10629672849592634514ULL;
int var_19 = 1049477554;
unsigned long long int var_20 = 5121716502646039909ULL;
long long int arr_0 [21] ;
signed char arr_1 [21] [21] ;
unsigned int arr_5 [21] ;
long long int arr_6 [21] ;
signed char arr_14 [15] [15] [15] ;
unsigned short arr_2 [21] ;
int arr_3 [21] ;
signed char arr_4 [21] ;
long long int arr_7 [21] [21] ;
unsigned int arr_8 [21] ;
long long int arr_15 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = -8880806164662476601LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)102;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 3049932357U : 2841642727U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 267197858242092772LL : 840888661396556391LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (signed char)25;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned short)19828 : (unsigned short)24346;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 1225110606 : 135417638;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (signed char)48 : (signed char)27;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_7 [i_0] [i_1] = (i_1 % 2 == 0) ? -2627042071803825934LL : 5033569280709047066LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? 3249163960U : 3168949460U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_15 [i_0] = -3046556844461301624LL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_15 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
