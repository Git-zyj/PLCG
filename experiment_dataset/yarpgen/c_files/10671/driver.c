#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -4593309811294342613LL;
_Bool var_7 = (_Bool)1;
long long int var_8 = 5893747302757485131LL;
unsigned int var_9 = 863667389U;
short var_10 = (short)-18863;
int zero = 0;
long long int var_11 = 2636602028668329132LL;
unsigned int var_12 = 966791412U;
void init() {
}

void checksum() {
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
