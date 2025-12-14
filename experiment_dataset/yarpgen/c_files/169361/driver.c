#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 5200663095372639730LL;
unsigned int var_3 = 1962881806U;
signed char var_10 = (signed char)-114;
int zero = 0;
unsigned int var_15 = 3368192773U;
signed char var_16 = (signed char)-48;
short var_17 = (short)-21453;
void init() {
}

void checksum() {
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
