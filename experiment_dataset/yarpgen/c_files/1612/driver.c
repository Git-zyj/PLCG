#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 2508218918102289697LL;
unsigned int var_3 = 2655785763U;
unsigned int var_12 = 3519159855U;
int zero = 0;
long long int var_16 = 8860923183088055070LL;
int var_17 = -1479472861;
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
