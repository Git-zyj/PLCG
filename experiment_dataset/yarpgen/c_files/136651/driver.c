#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_4 = -46654370;
long long int var_5 = 20942287083359895LL;
unsigned int var_6 = 1968762916U;
int var_8 = 1578073673;
int zero = 0;
int var_10 = -1932750459;
int var_11 = -753933397;
int var_12 = 1162377165;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
