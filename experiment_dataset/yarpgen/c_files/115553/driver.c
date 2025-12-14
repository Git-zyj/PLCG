#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_12 = (unsigned short)45669;
long long int var_14 = 571282246608308216LL;
unsigned long long int var_15 = 10465166842672800145ULL;
int zero = 0;
signed char var_16 = (signed char)-24;
long long int var_17 = 6512845545841054156LL;
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
