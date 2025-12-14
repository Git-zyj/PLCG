#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5906612221194010959ULL;
unsigned int var_1 = 873158782U;
short var_2 = (short)22823;
unsigned long long int var_3 = 6536527231938362603ULL;
unsigned short var_4 = (unsigned short)24294;
unsigned short var_5 = (unsigned short)63291;
unsigned short var_6 = (unsigned short)51135;
long long int var_7 = 5182738364957233329LL;
unsigned int var_9 = 2419685249U;
_Bool var_10 = (_Bool)0;
int zero = 0;
long long int var_11 = -8799207461039268516LL;
unsigned short var_12 = (unsigned short)30160;
long long int var_13 = -2809410022823413178LL;
unsigned long long int var_14 = 14226174458667011593ULL;
unsigned int var_15 = 1580469908U;
unsigned int var_16 = 2436059273U;
signed char var_17 = (signed char)-21;
_Bool var_18 = (_Bool)0;
unsigned char var_19 = (unsigned char)92;
long long int arr_0 [11] ;
long long int arr_1 [11] ;
long long int arr_3 [11] ;
unsigned char arr_6 [22] ;
_Bool arr_7 [22] [22] ;
unsigned int arr_9 [22] ;
int arr_14 [14] [14] ;
unsigned char arr_15 [14] [14] ;
unsigned short arr_17 [14] [14] [14] ;
signed char arr_18 [14] [14] ;
long long int arr_21 [14] [14] [14] ;
short arr_4 [11] ;
unsigned char arr_5 [11] ;
unsigned int arr_8 [22] ;
int arr_11 [22] [22] ;
unsigned char arr_12 [22] ;
unsigned short arr_24 [14] [14] [14] [14] ;
unsigned char arr_25 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = 2837536258491635264LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = -1861939553444618770LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = -2307557317780110143LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = (unsigned char)76;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_7 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? 1693999460U : 745849870U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_14 [i_0] [i_1] = (i_0 % 2 == 0) ? -650650459 : -1804769641;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_15 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)18 : (unsigned char)173;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned short)56652 : (unsigned short)12603;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_18 [i_0] [i_1] = (signed char)88;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_21 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? -2952678718248621269LL : 788209613020861343LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (short)-23489;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = (unsigned char)132;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_8 [i_0] = 368360470U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_11 [i_0] [i_1] = (i_1 % 2 == 0) ? 2048633032 : 530373428;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? (unsigned char)173 : (unsigned char)156;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_24 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (unsigned short)1030 : (unsigned short)57147;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_25 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)11 : (unsigned char)158;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    hash(&seed, arr_24 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_25 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
