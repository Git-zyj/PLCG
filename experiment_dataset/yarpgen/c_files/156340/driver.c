#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3478076733U;
long long int var_9 = 4266818698597096610LL;
_Bool var_14 = (_Bool)1;
int var_15 = -893534733;
int zero = 0;
long long int var_16 = 4573956630473786154LL;
unsigned int var_17 = 2062582087U;
int var_18 = 94422713;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
