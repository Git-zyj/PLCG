#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 691759884;
unsigned int var_2 = 584254545U;
short var_3 = (short)-22647;
signed char var_4 = (signed char)122;
int zero = 0;
unsigned short var_14 = (unsigned short)24992;
unsigned long long int var_15 = 6553817023241027960ULL;
void init() {
}

void checksum() {
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
