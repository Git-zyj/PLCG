#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_11 = -4354114941365779261LL;
int var_12 = 1536656013;
int zero = 0;
unsigned short var_15 = (unsigned short)49517;
unsigned long long int var_16 = 12150328563715116784ULL;
int var_17 = 571540220;
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
