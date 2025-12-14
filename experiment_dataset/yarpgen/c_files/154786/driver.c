#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)208;
unsigned short var_1 = (unsigned short)47120;
unsigned short var_2 = (unsigned short)18165;
unsigned short var_3 = (unsigned short)30828;
_Bool var_4 = (_Bool)1;
unsigned short var_5 = (unsigned short)28576;
unsigned int var_6 = 3626141958U;
_Bool var_7 = (_Bool)1;
unsigned short var_8 = (unsigned short)18781;
unsigned int var_10 = 673092047U;
unsigned int var_11 = 603647726U;
unsigned int var_15 = 1255869143U;
int var_16 = -1757701646;
unsigned long long int var_19 = 9832260609850955959ULL;
int zero = 0;
int var_20 = -177326107;
unsigned long long int var_21 = 10659949811354999369ULL;
unsigned long long int var_22 = 17393490504060876132ULL;
short var_23 = (short)22760;
unsigned char var_24 = (unsigned char)183;
unsigned long long int arr_0 [18] ;
_Bool arr_1 [18] [18] ;
int arr_3 [13] ;
signed char arr_8 [24] ;
signed char arr_9 [24] ;
unsigned int arr_11 [13] ;
short arr_12 [13] [13] ;
_Bool arr_2 [18] ;
signed char arr_6 [13] [13] ;
short arr_7 [13] ;
short arr_10 [24] ;
_Bool arr_15 [13] ;
short arr_16 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = 18015090417001894989ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = 1564853751;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_8 [i_0] = (signed char)-8;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_9 [i_0] = (signed char)114;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_11 [i_0] = 3080921297U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_12 [i_0] [i_1] = (short)-2459;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_6 [i_0] [i_1] = (signed char)-83;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_7 [i_0] = (short)5040;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_10 [i_0] = (short)-20574;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_15 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_16 [i_0] = (short)17477;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_16 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
