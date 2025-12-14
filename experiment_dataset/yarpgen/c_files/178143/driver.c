#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -413249094;
long long int var_5 = 4473805220331828071LL;
unsigned int var_7 = 4254715527U;
unsigned int var_10 = 2229747672U;
unsigned int var_12 = 2180501757U;
long long int var_13 = -7021463114032586612LL;
unsigned long long int var_14 = 301932811074112347ULL;
int zero = 0;
unsigned long long int var_16 = 5468870743838787576ULL;
unsigned char var_17 = (unsigned char)38;
unsigned long long int var_18 = 6329350754279360400ULL;
void init() {
}

void checksum() {
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
