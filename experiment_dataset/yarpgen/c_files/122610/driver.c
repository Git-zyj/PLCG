#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-32101;
unsigned short var_2 = (unsigned short)63247;
unsigned int var_5 = 4003121041U;
int var_13 = -126737884;
int zero = 0;
int var_16 = 1040590915;
unsigned int var_17 = 3553063363U;
_Bool var_18 = (_Bool)0;
unsigned int var_19 = 1116467707U;
short var_20 = (short)19629;
_Bool var_21 = (_Bool)0;
int var_22 = -129403076;
_Bool var_23 = (_Bool)1;
int var_24 = 1686427948;
unsigned int var_25 = 2965566396U;
unsigned int var_26 = 664940347U;
unsigned int var_27 = 3873078842U;
unsigned int arr_0 [13] ;
unsigned long long int arr_1 [13] [13] ;
_Bool arr_2 [13] ;
short arr_4 [13] [13] [13] ;
int arr_6 [13] ;
int arr_7 [13] ;
unsigned int arr_8 [13] [13] [13] ;
unsigned short arr_9 [13] [13] [13] [13] ;
unsigned int arr_13 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = 782961037U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = 2927172714379271316ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (short)-22250;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = -26897960;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_7 [i_0] = 1540258997;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 4020209750U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (unsigned short)20477;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_13 [i_0] = 2960339791U;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
