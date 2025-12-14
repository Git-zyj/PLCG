#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_2 = (_Bool)1;
long long int var_4 = -6365979640520838627LL;
unsigned int var_8 = 831576814U;
unsigned int var_10 = 2867359286U;
int var_14 = 1619348859;
int zero = 0;
long long int var_16 = 8757307292677447663LL;
unsigned long long int var_17 = 10752623415069444692ULL;
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
