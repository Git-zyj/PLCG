#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)90;
unsigned long long int var_6 = 7199810111354458475ULL;
unsigned long long int var_8 = 18067029191805332393ULL;
int zero = 0;
int var_11 = -1516733312;
unsigned long long int var_12 = 3467834351314085698ULL;
void init() {
}

void checksum() {
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
