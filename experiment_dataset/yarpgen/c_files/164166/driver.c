#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_7 = 17660001676784304876ULL;
int var_10 = 819417295;
int zero = 0;
_Bool var_11 = (_Bool)1;
signed char var_12 = (signed char)-120;
unsigned char var_13 = (unsigned char)192;
unsigned int var_14 = 518040389U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
