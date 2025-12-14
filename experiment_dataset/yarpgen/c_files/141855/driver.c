#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
signed char var_5 = (signed char)48;
unsigned short var_7 = (unsigned short)24625;
unsigned long long int var_8 = 15436707257016306460ULL;
unsigned short var_10 = (unsigned short)29069;
int zero = 0;
unsigned long long int var_15 = 11485764946139388776ULL;
unsigned int var_16 = 2243058859U;
void init() {
}

void checksum() {
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
