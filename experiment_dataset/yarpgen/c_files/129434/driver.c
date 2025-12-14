#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-8912;
unsigned long long int var_5 = 7345723169969144813ULL;
unsigned int var_8 = 3219371831U;
int var_9 = 1692677046;
int zero = 0;
int var_12 = 1539486674;
unsigned long long int var_13 = 4614982078085558091ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
