#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)196;
short var_1 = (short)6441;
unsigned char var_2 = (unsigned char)108;
int var_4 = 1091444238;
short var_5 = (short)5914;
long long int var_6 = 3246608032409119382LL;
unsigned char var_7 = (unsigned char)89;
unsigned int var_11 = 2157397741U;
short var_12 = (short)-21618;
int zero = 0;
short var_14 = (short)2215;
long long int var_15 = 7065791236356271016LL;
unsigned char var_16 = (unsigned char)229;
unsigned short var_17 = (unsigned short)41544;
unsigned char var_18 = (unsigned char)138;
unsigned short var_19 = (unsigned short)6912;
unsigned char var_20 = (unsigned char)10;
unsigned int var_21 = 2323827632U;
signed char var_22 = (signed char)12;
unsigned short var_23 = (unsigned short)32048;
signed char var_24 = (signed char)36;
long long int var_25 = -8266978758335786990LL;
int var_26 = 748112761;
unsigned long long int var_27 = 9764287999656690983ULL;
signed char var_28 = (signed char)87;
_Bool var_29 = (_Bool)0;
unsigned char var_30 = (unsigned char)238;
unsigned char var_31 = (unsigned char)100;
_Bool arr_0 [14] [14] ;
_Bool arr_1 [14] [14] ;
short arr_2 [14] ;
_Bool arr_3 [14] ;
long long int arr_4 [14] ;
unsigned short arr_5 [14] [14] [14] ;
signed char arr_6 [14] ;
unsigned char arr_8 [14] [14] [14] [14] ;
int arr_10 [14] [14] [14] [14] ;
signed char arr_11 [14] [14] [14] [14] [14] [14] ;
signed char arr_14 [14] [14] [14] [14] [14] ;
long long int arr_17 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (short)2241;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = 8661021767433300602LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned short)38236;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = (signed char)93;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (unsigned char)12;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = 1005292443;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (signed char)-65;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] = (signed char)-100;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_17 [i_0] = 7914790277020258220LL;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
