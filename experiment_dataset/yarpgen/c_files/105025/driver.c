#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
_Bool var_7 = (_Bool)1;
unsigned int var_13 = 2646926680U;
_Bool var_15 = (_Bool)0;
int zero = 0;
long long int var_17 = 9122028935695473453LL;
unsigned long long int var_18 = 14742503044509531542ULL;
void init() {
}

void checksum() {
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
