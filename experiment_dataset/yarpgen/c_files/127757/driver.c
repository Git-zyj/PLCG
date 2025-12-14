#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2109222187576069663LL;
unsigned long long int var_5 = 6913087547370102150ULL;
unsigned long long int var_6 = 14320084992298143381ULL;
int zero = 0;
signed char var_15 = (signed char)105;
signed char var_16 = (signed char)70;
unsigned long long int var_17 = 6684337686717869695ULL;
unsigned long long int var_18 = 5308047064480599265ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
