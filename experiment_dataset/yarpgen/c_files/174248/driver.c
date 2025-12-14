#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_1 = (_Bool)1;
unsigned long long int var_5 = 11608207952321542172ULL;
_Bool var_6 = (_Bool)0;
signed char var_9 = (signed char)48;
_Bool var_12 = (_Bool)0;
unsigned char var_13 = (unsigned char)56;
int zero = 0;
unsigned long long int var_14 = 2065275926842882266ULL;
int var_15 = 2075490556;
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
