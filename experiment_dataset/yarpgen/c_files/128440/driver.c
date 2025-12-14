#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2995196837439061996LL;
unsigned long long int var_2 = 3841481968113547213ULL;
long long int var_10 = 3092114427068881872LL;
long long int var_11 = 874901260933194786LL;
int zero = 0;
long long int var_16 = -6505476773088497221LL;
long long int var_17 = 1669018159697223134LL;
void init() {
}

void checksum() {
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
