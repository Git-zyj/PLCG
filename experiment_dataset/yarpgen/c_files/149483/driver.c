#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2142362052U;
unsigned long long int var_5 = 3590195163524723184ULL;
int zero = 0;
unsigned long long int var_19 = 6018192549805136119ULL;
unsigned long long int var_20 = 9580920441033599390ULL;
unsigned long long int var_21 = 16321939007469043427ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
