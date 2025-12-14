#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7853620849365603035ULL;
unsigned long long int var_4 = 14072140778477845825ULL;
unsigned long long int var_10 = 17687426310788943971ULL;
int zero = 0;
unsigned long long int var_12 = 6958511663481781525ULL;
unsigned int var_13 = 496387999U;
unsigned int var_14 = 1683966737U;
unsigned int var_15 = 4038838943U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
