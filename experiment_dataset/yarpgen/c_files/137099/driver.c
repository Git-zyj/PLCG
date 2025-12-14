#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3573761934208401002ULL;
unsigned short var_1 = (unsigned short)34254;
int var_2 = 958424295;
_Bool var_4 = (_Bool)1;
long long int var_5 = -1113125332116411551LL;
signed char var_6 = (signed char)92;
unsigned int var_7 = 454625581U;
unsigned int var_8 = 593961600U;
unsigned char var_9 = (unsigned char)205;
short var_11 = (short)-6694;
short var_13 = (short)30357;
int zero = 0;
unsigned long long int var_14 = 13533636382902976088ULL;
_Bool var_15 = (_Bool)1;
int var_16 = -460909345;
unsigned char var_17 = (unsigned char)130;
unsigned char var_18 = (unsigned char)65;
unsigned char arr_3 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (unsigned char)93;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
