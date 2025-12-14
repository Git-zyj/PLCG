#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3468971317U;
int var_3 = -993455882;
int var_4 = 1131916455;
short var_7 = (short)-8455;
unsigned long long int var_9 = 5879587495033140081ULL;
int var_10 = -1665629820;
short var_11 = (short)-21126;
int zero = 0;
unsigned long long int var_12 = 4980764221198968311ULL;
signed char var_13 = (signed char)-106;
int var_14 = -1152301629;
_Bool var_15 = (_Bool)0;
short var_16 = (short)6329;
signed char var_17 = (signed char)-66;
unsigned long long int var_18 = 61958645921106792ULL;
unsigned char var_19 = (unsigned char)184;
long long int var_20 = -6094894444868229269LL;
unsigned long long int var_21 = 1122532435214817171ULL;
_Bool var_22 = (_Bool)0;
_Bool var_23 = (_Bool)0;
unsigned int var_24 = 616942818U;
unsigned char var_25 = (unsigned char)173;
int arr_0 [19] ;
unsigned char arr_2 [19] ;
short arr_3 [19] [19] ;
int arr_4 [19] [19] [19] ;
int arr_6 [19] ;
long long int arr_7 [19] [19] ;
unsigned long long int arr_8 [19] [19] [19] [19] [19] ;
_Bool arr_9 [19] [19] [19] [19] [19] [19] ;
long long int arr_14 [13] ;
unsigned short arr_15 [13] [13] ;
unsigned int arr_17 [13] ;
unsigned int arr_10 [19] [19] [19] [19] ;
signed char arr_13 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = -2051469272;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (unsigned char)92;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_3 [i_0] [i_1] = (short)13796;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = -725851431;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 605358310 : -420491348;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_7 [i_0] [i_1] = -2904088754893817440LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        arr_8 [i_0] [i_1] [i_2] [i_3] [i_4] = 6082450787154771998ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 19; ++i_5) 
                            arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_2 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_14 [i_0] = -1017400622846639654LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_15 [i_0] [i_1] = (unsigned short)49242;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_17 [i_0] = 3552730465U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 2591960675U : 367655181U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_13 [i_0] = (signed char)-53;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    hash(&seed, arr_10 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
