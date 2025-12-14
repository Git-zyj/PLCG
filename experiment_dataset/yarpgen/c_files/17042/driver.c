#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 11324235653851192447ULL;
int var_5 = -1801067904;
signed char var_8 = (signed char)30;
signed char var_9 = (signed char)5;
signed char var_11 = (signed char)-11;
int var_12 = 971625679;
long long int var_13 = -1408848174401783470LL;
unsigned long long int var_15 = 3643005102535226921ULL;
long long int var_17 = 524622395868987046LL;
int zero = 0;
short var_20 = (short)-12291;
unsigned short var_21 = (unsigned short)32173;
_Bool var_22 = (_Bool)0;
long long int var_23 = 7921735120710076776LL;
_Bool var_24 = (_Bool)0;
_Bool var_25 = (_Bool)0;
_Bool var_26 = (_Bool)1;
int var_27 = -93578753;
_Bool var_28 = (_Bool)1;
_Bool var_29 = (_Bool)1;
unsigned short arr_1 [13] ;
_Bool arr_3 [13] ;
unsigned long long int arr_4 [13] [13] ;
long long int arr_5 [13] [13] [13] ;
_Bool arr_6 [13] [13] ;
_Bool arr_14 [13] [13] [13] [13] ;
int arr_7 [13] [13] ;
long long int arr_10 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (unsigned short)20931;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_4 [i_0] [i_1] = 2186072146064107973ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = -2035956175866721183LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_7 [i_0] [i_1] = (i_1 % 2 == 0) ? -1525097641 : 1690544964;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_10 [i_0] = -3246035951522598966LL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
