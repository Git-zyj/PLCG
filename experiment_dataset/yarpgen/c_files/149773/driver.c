#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2672412193U;
short var_3 = (short)-12760;
short var_4 = (short)2505;
short var_12 = (short)-7745;
int zero = 0;
signed char var_13 = (signed char)-34;
int var_14 = -828700136;
short var_15 = (short)-2050;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
