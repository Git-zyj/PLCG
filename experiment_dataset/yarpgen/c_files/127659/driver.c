#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 599479890U;
int var_3 = -445756677;
unsigned long long int var_15 = 6167996477824852980ULL;
int zero = 0;
long long int var_17 = -8761148725349078046LL;
unsigned long long int var_18 = 5945896662451545158ULL;
unsigned int var_19 = 1764174295U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
