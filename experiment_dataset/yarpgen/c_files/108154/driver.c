#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-25157;
long long int var_7 = 4165580199063846072LL;
short var_8 = (short)31744;
unsigned int var_13 = 2911686128U;
int zero = 0;
unsigned int var_14 = 4018686870U;
unsigned int var_15 = 3721795026U;
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
