#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)24179;
signed char var_2 = (signed char)7;
unsigned short var_4 = (unsigned short)51055;
unsigned short var_5 = (unsigned short)28029;
int var_7 = -225013445;
signed char var_10 = (signed char)99;
int zero = 0;
signed char var_13 = (signed char)99;
int var_14 = 1555106552;
short var_15 = (short)-12448;
unsigned long long int var_16 = 16781858502073338347ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
