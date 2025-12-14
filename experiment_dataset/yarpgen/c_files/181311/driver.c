#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2536860565U;
short var_1 = (short)2858;
short var_2 = (short)1065;
short var_3 = (short)-2762;
unsigned long long int var_4 = 8903547910239146681ULL;
unsigned long long int var_5 = 4337697715472230282ULL;
_Bool var_6 = (_Bool)0;
short var_8 = (short)30713;
unsigned short var_10 = (unsigned short)14256;
unsigned char var_11 = (unsigned char)10;
unsigned char var_12 = (unsigned char)187;
unsigned long long int var_13 = 3292152465724900556ULL;
int zero = 0;
int var_14 = 1941209770;
signed char var_15 = (signed char)-65;
short var_16 = (short)6559;
unsigned long long int var_17 = 6575544015966763655ULL;
_Bool var_18 = (_Bool)0;
unsigned char var_19 = (unsigned char)21;
_Bool var_20 = (_Bool)0;
short var_21 = (short)10645;
_Bool var_22 = (_Bool)0;
int var_23 = 1901234237;
short var_24 = (short)13471;
int var_25 = -2054238188;
unsigned long long int var_26 = 1872415953347918426ULL;
long long int var_27 = 5182756885340887871LL;
unsigned short var_28 = (unsigned short)15175;
signed char var_29 = (signed char)51;
short var_30 = (short)-772;
unsigned char var_31 = (unsigned char)191;
short var_32 = (short)-1324;
unsigned long long int arr_0 [10] [10] ;
unsigned char arr_7 [10] [10] [10] ;
_Bool arr_10 [10] ;
signed char arr_11 [10] [10] ;
unsigned int arr_17 [21] ;
unsigned char arr_18 [21] ;
unsigned long long int arr_19 [21] [21] ;
unsigned short arr_22 [21] [21] ;
int arr_24 [21] [21] [21] ;
unsigned short arr_26 [21] [21] [21] [21] ;
int arr_27 [21] [21] [21] [21] [21] [21] ;
signed char arr_30 [21] ;
_Bool arr_35 [21] [21] [21] [21] ;
_Bool arr_36 [21] [21] ;
int arr_37 [21] [21] [21] [21] ;
unsigned short arr_4 [10] ;
int arr_9 [10] [10] ;
_Bool arr_12 [10] [10] [10] ;
_Bool arr_29 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_0 [i_0] [i_1] = 6454874917385251298ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (unsigned char)32;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_10 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_11 [i_0] [i_1] = (signed char)-89;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_17 [i_0] = 865476204U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_18 [i_0] = (unsigned char)26;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_19 [i_0] [i_1] = 11020488437172894165ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_22 [i_0] [i_1] = (unsigned short)41486;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_24 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? -784427026 : 1881816737;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_26 [i_0] [i_1] [i_2] [i_3] = (unsigned short)21077;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            arr_27 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 1241200603;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_30 [i_0] = (signed char)124;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_35 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_36 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_37 [i_0] [i_1] [i_2] [i_3] = -1266612095;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = (unsigned short)24783;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_9 [i_0] [i_1] = -1082053495;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_29 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
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
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_12 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_29 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
