#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -84397448;
int var_5 = 956879431;
_Bool var_6 = (_Bool)1;
long long int var_11 = -5937996103288382712LL;
int zero = 0;
signed char var_14 = (signed char)-14;
long long int var_15 = -7957834027980403328LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
