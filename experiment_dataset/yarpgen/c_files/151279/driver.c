#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8151414927552552431LL;
unsigned long long int var_1 = 3615859046059067152ULL;
int zero = 0;
unsigned long long int var_10 = 6223147882229226545ULL;
short var_11 = (short)16898;
long long int var_12 = 923465353602396481LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
