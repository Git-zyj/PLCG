#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-3121;
short var_3 = (short)11941;
unsigned char var_5 = (unsigned char)165;
int var_6 = 1064008563;
_Bool var_8 = (_Bool)1;
int var_9 = -1210445813;
signed char var_10 = (signed char)58;
unsigned char var_13 = (unsigned char)194;
int var_14 = -1064291623;
long long int var_15 = 5944855380378057659LL;
unsigned int var_16 = 3477111307U;
int zero = 0;
long long int var_18 = -7908556803611878859LL;
int var_19 = 1883492424;
unsigned char var_20 = (unsigned char)22;
long long int var_21 = -8675701341059987039LL;
unsigned int var_22 = 849972823U;
unsigned char var_23 = (unsigned char)24;
int arr_1 [20] [20] ;
unsigned int arr_2 [20] ;
short arr_4 [19] [19] ;
long long int arr_5 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_1 [i_0] [i_1] = -239376217;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = 2479289729U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_4 [i_0] [i_1] = (short)20608;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = -5969829215303723733LL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
