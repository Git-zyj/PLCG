#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1048039936;
unsigned short var_3 = (unsigned short)48007;
unsigned long long int var_5 = 834812153315374805ULL;
long long int var_11 = -6829904703002936738LL;
short var_15 = (short)-7396;
int zero = 0;
unsigned int var_16 = 2446255809U;
unsigned int var_17 = 148613461U;
void init() {
}

void checksum() {
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
