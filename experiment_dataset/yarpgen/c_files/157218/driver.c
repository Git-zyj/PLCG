#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6642275727635916144LL;
long long int var_9 = 7625983362278062732LL;
int var_10 = 1403366865;
int zero = 0;
long long int var_13 = -2528720624638379901LL;
int var_14 = -198719079;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
