#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 4565339527570603077LL;
int var_3 = 1352305407;
int zero = 0;
unsigned long long int var_10 = 16486550970313531753ULL;
unsigned long long int var_11 = 1065984764364514415ULL;
unsigned long long int var_12 = 1782485531025818312ULL;
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
