#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)17570;
int var_1 = 1836763595;
int var_3 = -446374122;
unsigned long long int var_9 = 11382464245706046486ULL;
signed char var_10 = (signed char)-69;
int zero = 0;
int var_11 = -1649943532;
_Bool var_12 = (_Bool)0;
long long int var_13 = 7021096195770206581LL;
short var_14 = (short)-26396;
signed char var_15 = (signed char)79;
long long int var_16 = 577697072644752111LL;
signed char var_17 = (signed char)-13;
unsigned char var_18 = (unsigned char)208;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
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
