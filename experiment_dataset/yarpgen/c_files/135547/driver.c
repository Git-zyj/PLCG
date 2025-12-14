#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)14;
_Bool var_1 = (_Bool)0;
int var_2 = -1376335282;
unsigned short var_3 = (unsigned short)44157;
short var_4 = (short)-19149;
signed char var_5 = (signed char)-1;
short var_9 = (short)7200;
_Bool var_10 = (_Bool)0;
signed char var_12 = (signed char)70;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned char var_15 = (unsigned char)62;
int var_16 = -1490171564;
_Bool var_17 = (_Bool)1;
long long int var_18 = 1894635993448657658LL;
_Bool var_19 = (_Bool)0;
short var_20 = (short)30913;
signed char var_21 = (signed char)121;
unsigned long long int var_22 = 7204422525630943158ULL;
short var_23 = (short)-19401;
unsigned short var_24 = (unsigned short)32187;
_Bool var_25 = (_Bool)0;
int var_26 = 356882442;
signed char var_27 = (signed char)30;
short arr_5 [12] [12] ;
unsigned long long int arr_8 [20] [20] ;
long long int arr_9 [20] [20] ;
short arr_12 [23] [23] ;
unsigned char arr_14 [23] [23] ;
unsigned short arr_16 [23] [23] ;
int arr_17 [23] ;
unsigned long long int arr_18 [23] [23] [23] ;
int arr_19 [23] [23] ;
unsigned short arr_11 [20] [20] ;
_Bool arr_22 [23] [23] [23] ;
unsigned long long int arr_23 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_5 [i_0] [i_1] = (short)19459;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_8 [i_0] [i_1] = 18045969216314795249ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_9 [i_0] [i_1] = -2135481775420708434LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_12 [i_0] [i_1] = (short)-7905;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_14 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)7 : (unsigned char)49;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_16 [i_0] [i_1] = (unsigned short)40876;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_17 [i_0] = 95870322;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = 7689481365430865510ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_19 [i_0] [i_1] = (i_0 % 2 == 0) ? 1603270065 : -542864742;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_11 [i_0] [i_1] = (unsigned short)56598;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_22 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_23 [i_0] = (i_0 % 2 == 0) ? 13271615046752977700ULL : 799238187753005516ULL;
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
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_22 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_23 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
