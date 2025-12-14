#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-27369;
_Bool var_2 = (_Bool)0;
long long int var_4 = 2500095501378437403LL;
long long int var_11 = 7333317049341702253LL;
_Bool var_12 = (_Bool)1;
int zero = 0;
int var_14 = 545149158;
_Bool var_15 = (_Bool)0;
unsigned int var_16 = 535487554U;
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
