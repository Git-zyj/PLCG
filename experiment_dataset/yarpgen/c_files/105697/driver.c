#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_2 = (short)-10256;
short var_3 = (short)3019;
signed char var_5 = (signed char)-69;
unsigned char var_6 = (unsigned char)159;
unsigned char var_9 = (unsigned char)94;
unsigned char var_12 = (unsigned char)236;
int zero = 0;
signed char var_13 = (signed char)115;
unsigned char var_14 = (unsigned char)129;
unsigned char var_15 = (unsigned char)102;
unsigned char var_16 = (unsigned char)208;
unsigned int var_17 = 939873986U;
unsigned int arr_1 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 1602247120U : 444253783U;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
