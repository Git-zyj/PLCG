#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 13920556804455519381ULL;
unsigned long long int var_2 = 14242730883708074705ULL;
signed char var_3 = (signed char)-53;
unsigned char var_4 = (unsigned char)53;
signed char var_5 = (signed char)-38;
unsigned char var_6 = (unsigned char)61;
int var_7 = 731689032;
int var_8 = -999230915;
_Bool var_9 = (_Bool)1;
unsigned short var_10 = (unsigned short)40135;
_Bool var_11 = (_Bool)0;
unsigned short var_12 = (unsigned short)60587;
_Bool var_13 = (_Bool)0;
unsigned char var_14 = (unsigned char)122;
int zero = 0;
unsigned short var_15 = (unsigned short)26856;
unsigned int var_16 = 1547577940U;
_Bool var_17 = (_Bool)0;
short var_18 = (short)23831;
unsigned long long int var_19 = 2237103249748956491ULL;
unsigned short var_20 = (unsigned short)46205;
int var_21 = -625006979;
unsigned int var_22 = 1532885282U;
_Bool var_23 = (_Bool)1;
unsigned int var_24 = 1634398974U;
long long int arr_0 [13] ;
_Bool arr_1 [13] ;
unsigned int arr_4 [13] [13] ;
int arr_8 [13] [13] [13] ;
short arr_11 [18] ;
unsigned short arr_12 [18] ;
unsigned int arr_13 [18] ;
short arr_2 [13] ;
short arr_3 [13] ;
unsigned short arr_9 [13] [13] [13] ;
unsigned char arr_14 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = -1493319369496698552LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_4 [i_0] [i_1] = 3986055601U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = -836430735;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_11 [i_0] = (short)-22594;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_12 [i_0] = (unsigned short)20406;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_13 [i_0] = 2625499260U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (short)4429;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (short)-22343;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (unsigned short)32220;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_14 [i_0] = (unsigned char)160;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_9 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_14 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
