#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 3306853834783621334ULL;
unsigned long long int var_11 = 2909239307493299114ULL;
int zero = 0;
_Bool var_15 = (_Bool)0;
unsigned long long int var_16 = 6581609236567742774ULL;
long long int var_17 = 3178213891874989309LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
