#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)134;
unsigned int var_7 = 16816958U;
unsigned int var_13 = 1180237244U;
long long int var_16 = -6222700405456354027LL;
int zero = 0;
unsigned long long int var_19 = 3385624176701658376ULL;
long long int var_20 = 1163761373818952493LL;
unsigned char var_21 = (unsigned char)119;
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
