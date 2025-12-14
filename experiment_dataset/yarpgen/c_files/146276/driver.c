#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 3261452025U;
long long int var_7 = 4822263109373209172LL;
unsigned short var_13 = (unsigned short)36474;
unsigned long long int var_17 = 16288954786253419657ULL;
int zero = 0;
short var_18 = (short)-8911;
unsigned short var_19 = (unsigned short)4847;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
