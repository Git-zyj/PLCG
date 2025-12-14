#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16697566379158143705ULL;
unsigned long long int var_5 = 6793142902721691301ULL;
int zero = 0;
unsigned long long int var_14 = 16669699300216901796ULL;
unsigned long long int var_15 = 13898903030931243503ULL;
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
