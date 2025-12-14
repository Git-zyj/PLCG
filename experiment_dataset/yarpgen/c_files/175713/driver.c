#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_7 = (_Bool)0;
short var_10 = (short)26429;
unsigned long long int var_11 = 13742412133617143591ULL;
int zero = 0;
unsigned long long int var_19 = 17436767430481343369ULL;
unsigned int var_20 = 2051718879U;
unsigned int var_21 = 1711766832U;
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
