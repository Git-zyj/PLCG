#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 1903116384636550688ULL;
short var_5 = (short)29734;
unsigned char var_6 = (unsigned char)3;
int var_7 = -1413567421;
unsigned char var_9 = (unsigned char)94;
short var_10 = (short)27593;
signed char var_11 = (signed char)65;
unsigned long long int var_12 = 8026378763351165904ULL;
int zero = 0;
int var_13 = 31971989;
short var_14 = (short)21240;
short var_15 = (short)-25052;
unsigned int var_16 = 3102150304U;
unsigned int var_17 = 2667445173U;
long long int var_18 = -2058266929328460287LL;
signed char var_19 = (signed char)-47;
signed char arr_1 [20] ;
unsigned long long int arr_3 [20] [20] ;
int arr_13 [18] ;
signed char arr_18 [18] [18] [18] [18] ;
unsigned char arr_19 [18] [18] [18] ;
signed char arr_21 [18] [18] ;
signed char arr_4 [20] ;
signed char arr_10 [20] [20] [20] ;
unsigned int arr_23 [18] ;
int arr_24 [18] ;
int arr_25 [18] ;
int arr_29 [20] ;
unsigned int arr_30 [20] ;
unsigned int arr_35 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (signed char)12;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_3 [i_0] [i_1] = 3368585174613300982ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_13 [i_0] = 2137053051;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = (signed char)116;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = (unsigned char)202;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_21 [i_0] [i_1] = (signed char)-18;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = (signed char)23;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (signed char)-83;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_23 [i_0] = 3124856320U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_24 [i_0] = 759789891;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_25 [i_0] = -1155643392;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_29 [i_0] = 198209472;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_30 [i_0] = 44758188U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_35 [i_0] = (i_0 % 2 == 0) ? 357078666U : 1236484483U;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_10 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_23 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_24 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_25 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_29 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_30 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_35 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
