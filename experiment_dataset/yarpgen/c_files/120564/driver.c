#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)16285;
unsigned long long int var_12 = 7090222165770225636ULL;
unsigned long long int var_14 = 16649043378675085412ULL;
int zero = 0;
_Bool var_16 = (_Bool)0;
unsigned int var_17 = 4180138271U;
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
