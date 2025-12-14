#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned int var_2 = 356991785U;
short var_9 = (short)-6064;
short var_10 = (short)-9316;
signed char var_11 = (signed char)-28;
short var_13 = (short)3517;
unsigned int var_14 = 1776517875U;
int zero = 0;
int var_15 = 839939828;
unsigned char var_16 = (unsigned char)218;
int var_17 = 2014775429;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
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
