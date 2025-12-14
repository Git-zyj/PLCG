#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -3687632695062870287LL;
unsigned short var_9 = (unsigned short)1129;
short var_11 = (short)28884;
short var_12 = (short)-30633;
unsigned short var_15 = (unsigned short)19787;
unsigned char var_16 = (unsigned char)109;
int zero = 0;
unsigned int var_17 = 3951922181U;
long long int var_18 = -2984257167240278438LL;
unsigned int var_19 = 3376746501U;
unsigned int var_20 = 1053419446U;
unsigned short var_21 = (unsigned short)51121;
unsigned short var_22 = (unsigned short)28094;
_Bool arr_0 [14] ;
long long int arr_2 [14] ;
unsigned char arr_6 [14] [14] [14] ;
unsigned char arr_7 [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = 1717645289005169855LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (unsigned char)195;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (unsigned char)79;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
