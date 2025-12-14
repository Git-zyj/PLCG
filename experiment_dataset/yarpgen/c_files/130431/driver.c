#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 3838847838U;
unsigned long long int var_7 = 12873833691597429275ULL;
unsigned int var_8 = 617724405U;
int zero = 0;
long long int var_14 = 5619500529423841149LL;
unsigned int var_15 = 3127357500U;
unsigned long long int var_16 = 1793856731143144899ULL;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
