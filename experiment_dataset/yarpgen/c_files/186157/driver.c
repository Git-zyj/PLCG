#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 8838964774038217800ULL;
long long int var_4 = -6653820071554815814LL;
_Bool var_6 = (_Bool)1;
int var_7 = -1787942896;
int zero = 0;
_Bool var_15 = (_Bool)1;
unsigned long long int var_16 = 10948095218853204791ULL;
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
