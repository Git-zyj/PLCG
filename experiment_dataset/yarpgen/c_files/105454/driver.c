#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-14796;
_Bool var_7 = (_Bool)0;
unsigned long long int var_8 = 12456586225265467409ULL;
unsigned int var_9 = 1039827164U;
int zero = 0;
unsigned int var_14 = 374948659U;
long long int var_15 = 2157868105183863624LL;
_Bool var_16 = (_Bool)0;
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
