#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -707792327;
unsigned int var_3 = 1197718194U;
_Bool var_5 = (_Bool)1;
int zero = 0;
int var_12 = 120825936;
unsigned long long int var_13 = 11476110755108699761ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
