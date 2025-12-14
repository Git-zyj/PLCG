#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1593104698;
unsigned long long int var_3 = 837391170949258004ULL;
signed char var_4 = (signed char)109;
int var_5 = 1900098373;
_Bool var_6 = (_Bool)1;
_Bool var_8 = (_Bool)1;
unsigned short var_9 = (unsigned short)27073;
short var_10 = (short)1387;
int var_11 = 936293100;
unsigned long long int var_12 = 7016329219310597135ULL;
unsigned long long int var_13 = 13939270696561450467ULL;
int zero = 0;
_Bool var_14 = (_Bool)0;
signed char var_15 = (signed char)100;
unsigned int var_16 = 111907478U;
long long int var_17 = -3148236797437166890LL;
unsigned long long int var_18 = 9628384906566669363ULL;
_Bool var_19 = (_Bool)0;
unsigned long long int var_20 = 451767311735375756ULL;
unsigned long long int var_21 = 656486852013576653ULL;
_Bool var_22 = (_Bool)0;
unsigned char var_23 = (unsigned char)246;
unsigned long long int arr_0 [18] [18] ;
unsigned char arr_1 [18] [18] ;
unsigned long long int arr_2 [18] ;
long long int arr_3 [18] [18] ;
short arr_4 [18] [18] ;
unsigned long long int arr_5 [18] [18] [18] ;
unsigned char arr_12 [18] ;
unsigned long long int arr_18 [25] ;
short arr_19 [25] ;
short arr_20 [25] ;
unsigned char arr_6 [18] [18] ;
unsigned char arr_9 [18] [18] ;
unsigned short arr_10 [18] [18] [18] ;
unsigned int arr_13 [18] [18] ;
int arr_14 [18] [18] [18] ;
unsigned int arr_22 [25] [25] ;
unsigned short arr_23 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = 11727332318808062766ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)206;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = 3782535967355087017ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_3 [i_0] [i_1] = -1228516899781719564LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_4 [i_0] [i_1] = (short)26930;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 12774851301933211578ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_12 [i_0] = (unsigned char)164;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_18 [i_0] = 17534117809837077394ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_19 [i_0] = (short)-26959;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_20 [i_0] = (short)29481;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned char)139;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_9 [i_0] [i_1] = (unsigned char)38;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (unsigned short)64549;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_13 [i_0] [i_1] = (i_1 % 2 == 0) ? 3817044905U : 2148481982U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 1830051242 : 1686258868;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_22 [i_0] [i_1] = (i_1 % 2 == 0) ? 2743796577U : 1922533396U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_23 [i_0] = (i_0 % 2 == 0) ? (unsigned short)12737 : (unsigned short)62984;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_10 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_14 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_22 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_23 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
