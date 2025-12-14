#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-26561;
unsigned short var_2 = (unsigned short)32678;
short var_4 = (short)1893;
int var_10 = 1890009320;
int zero = 0;
short var_14 = (short)-9066;
signed char var_15 = (signed char)15;
unsigned int var_16 = 2051184885U;
short var_17 = (short)-23132;
unsigned char var_18 = (unsigned char)42;
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
