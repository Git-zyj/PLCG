#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2946755082U;
unsigned long long int var_7 = 10977570573249710615ULL;
int zero = 0;
unsigned int var_14 = 749142952U;
unsigned long long int var_15 = 14697157572379616025ULL;
int var_16 = -1491561181;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
