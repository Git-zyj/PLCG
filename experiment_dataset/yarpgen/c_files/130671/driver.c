#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -8680959979926662092LL;
short var_3 = (short)-29120;
int var_5 = -1678495972;
unsigned char var_6 = (unsigned char)235;
int var_8 = 1545548330;
unsigned int var_10 = 2176156463U;
short var_11 = (short)5206;
int var_13 = -1486926033;
int zero = 0;
short var_14 = (short)-20301;
int var_15 = 733025714;
unsigned char var_16 = (unsigned char)13;
unsigned int var_17 = 764952978U;
short var_18 = (short)-11379;
unsigned char var_19 = (unsigned char)151;
unsigned int var_20 = 169218297U;
int var_21 = -1390342009;
short arr_0 [22] [22] ;
int arr_1 [22] ;
unsigned int arr_3 [22] ;
short arr_5 [22] ;
unsigned int arr_6 [22] ;
unsigned long long int arr_7 [22] ;
short arr_8 [22] [22] ;
int arr_10 [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = (short)15571;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = 741034677;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = 3336154992U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = (short)-1786;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = 2156072033U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_7 [i_0] = 7628560611585879955ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_8 [i_0] [i_1] = (short)-32567;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = -842306984;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
