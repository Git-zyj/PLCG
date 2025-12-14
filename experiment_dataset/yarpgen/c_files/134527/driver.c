#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-66;
unsigned short var_14 = (unsigned short)45484;
unsigned long long int var_15 = 1086700666870381033ULL;
unsigned int var_16 = 562376581U;
int zero = 0;
_Bool var_17 = (_Bool)0;
unsigned int var_18 = 2324664663U;
void init() {
}

void checksum() {
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
