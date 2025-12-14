#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)11054;
int var_4 = 1205391764;
short var_7 = (short)-22921;
short var_8 = (short)16133;
unsigned short var_12 = (unsigned short)58650;
short var_13 = (short)-10399;
int zero = 0;
short var_14 = (short)-23974;
unsigned int var_15 = 2490901138U;
signed char var_16 = (signed char)-68;
unsigned short var_17 = (unsigned short)46948;
signed char var_18 = (signed char)68;
void init() {
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
