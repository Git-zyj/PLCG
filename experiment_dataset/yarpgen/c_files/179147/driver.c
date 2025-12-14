#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)222;
unsigned char var_3 = (unsigned char)164;
unsigned char var_13 = (unsigned char)251;
unsigned char var_14 = (unsigned char)72;
signed char var_17 = (signed char)-53;
int zero = 0;
_Bool var_18 = (_Bool)1;
signed char var_19 = (signed char)-77;
short var_20 = (short)221;
long long int var_21 = 611306239676218541LL;
long long int var_22 = -3516540455127793331LL;
_Bool var_23 = (_Bool)1;
signed char var_24 = (signed char)-126;
signed char var_25 = (signed char)-6;
signed char var_26 = (signed char)120;
unsigned char arr_0 [24] [24] ;
signed char arr_1 [24] ;
signed char arr_3 [22] [22] ;
long long int arr_4 [22] ;
unsigned char arr_8 [14] ;
signed char arr_12 [14] [14] ;
unsigned char arr_14 [14] ;
unsigned long long int arr_16 [14] ;
signed char arr_2 [24] ;
_Bool arr_5 [22] ;
long long int arr_10 [14] [14] ;
unsigned char arr_15 [14] [14] [14] ;
unsigned char arr_18 [14] [14] ;
unsigned char arr_19 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)242;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (signed char)48;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)92 : (signed char)101;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = 6244853266732130532LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (unsigned char)19 : (unsigned char)42;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_12 [i_0] [i_1] = (signed char)-76;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_14 [i_0] = (unsigned char)83;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_16 [i_0] = 4248738484240352125ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (signed char)104;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_10 [i_0] [i_1] = (i_1 % 2 == 0) ? 7293025401887427223LL : 5801481226345181959LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (unsigned char)97;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_18 [i_0] [i_1] = (unsigned char)22;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_19 [i_0] [i_1] = (unsigned char)34;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_15 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_18 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_19 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
