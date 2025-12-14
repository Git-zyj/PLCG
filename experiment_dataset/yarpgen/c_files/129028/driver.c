#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 10955862278643988638ULL;
unsigned char var_12 = (unsigned char)55;
int zero = 0;
unsigned long long int var_15 = 4847652641907650994ULL;
unsigned long long int var_16 = 9550077200480631381ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
