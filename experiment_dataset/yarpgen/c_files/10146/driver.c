#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)16;
unsigned short var_1 = (unsigned short)47691;
_Bool var_3 = (_Bool)0;
unsigned long long int var_5 = 16183738287199637678ULL;
_Bool var_6 = (_Bool)0;
unsigned char var_7 = (unsigned char)196;
long long int var_9 = 3522934109500258893LL;
unsigned short var_10 = (unsigned short)11099;
unsigned char var_13 = (unsigned char)33;
unsigned int var_14 = 2917584619U;
int var_15 = 1482496644;
int zero = 0;
unsigned short var_16 = (unsigned short)38731;
int var_17 = 1919344777;
_Bool var_18 = (_Bool)0;
short var_19 = (short)-29392;
int var_20 = -290625781;
unsigned int var_21 = 1609097058U;
unsigned char var_22 = (unsigned char)204;
unsigned short var_23 = (unsigned short)5016;
short arr_0 [19] [19] ;
signed char arr_1 [19] [19] ;
long long int arr_3 [19] [19] [19] ;
unsigned int arr_4 [19] ;
int arr_5 [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = (short)-30328;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)-66;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = -955577968873108485LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = 396435810U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = -1832605422;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
