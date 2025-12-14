#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -748136340;
int var_6 = 1396227537;
unsigned long long int var_11 = 16055347266659279270ULL;
int zero = 0;
unsigned long long int var_15 = 4894203551805882421ULL;
int var_16 = -1638818707;
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
