#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_11 = 32369280U;
unsigned int var_15 = 2449987918U;
int zero = 0;
unsigned int var_16 = 3202556489U;
unsigned short var_17 = (unsigned short)65375;
signed char var_18 = (signed char)(-127 - 1);
void init() {
}

void checksum() {
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
