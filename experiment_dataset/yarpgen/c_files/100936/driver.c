#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)173;
unsigned char var_1 = (unsigned char)146;
int var_2 = -1390613537;
unsigned long long int var_3 = 7831738636652744054ULL;
int var_4 = 705941804;
int var_5 = -1823831842;
short var_6 = (short)28762;
_Bool var_8 = (_Bool)1;
unsigned short var_9 = (unsigned short)52109;
unsigned char var_10 = (unsigned char)243;
int var_11 = 971684216;
unsigned long long int var_13 = 359416047701292205ULL;
int zero = 0;
unsigned short var_14 = (unsigned short)18981;
signed char var_15 = (signed char)-76;
unsigned long long int var_16 = 1295240184978150533ULL;
signed char var_17 = (signed char)-56;
long long int var_18 = 1384105144560004895LL;
unsigned long long int var_19 = 1660185604060378171ULL;
short var_20 = (short)17725;
signed char var_21 = (signed char)65;
unsigned char var_22 = (unsigned char)163;
int var_23 = -1541340713;
signed char var_24 = (signed char)-20;
unsigned short arr_0 [18] [18] ;
long long int arr_1 [18] ;
int arr_2 [18] ;
unsigned char arr_4 [15] ;
_Bool arr_9 [15] [15] ;
int arr_13 [15] ;
signed char arr_15 [15] ;
int arr_28 [23] [23] ;
unsigned short arr_31 [23] ;
int arr_5 [15] ;
unsigned short arr_6 [15] ;
unsigned long long int arr_11 [15] [15] ;
unsigned long long int arr_16 [15] ;
unsigned short arr_17 [15] ;
_Bool arr_21 [15] ;
unsigned long long int arr_22 [15] [15] ;
long long int arr_23 [15] [15] ;
int arr_27 [15] ;
int arr_33 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)55693;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = 5290176432539660815LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = 946349773;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = (unsigned char)64;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_9 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_13 [i_0] = -1299030560;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_15 [i_0] = (signed char)62;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_28 [i_0] [i_1] = -800571130;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_31 [i_0] = (unsigned short)42440;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = -1205352862;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = (unsigned short)6524;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_11 [i_0] [i_1] = 12859758165377158146ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_16 [i_0] = 11821621260910782922ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_17 [i_0] = (unsigned short)12298;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_21 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_22 [i_0] [i_1] = 3758154077447906851ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_23 [i_0] [i_1] = -6658777072974543940LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_27 [i_0] = 1804997410;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_33 [i_0] [i_1] = -1372883874;
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
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_21 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_22 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_23 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_27 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_33 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
