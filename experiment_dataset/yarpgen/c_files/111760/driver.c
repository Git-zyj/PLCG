#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4265107824U;
unsigned int var_8 = 3966162813U;
unsigned int var_14 = 3951311317U;
unsigned int var_17 = 2188803934U;
unsigned int var_19 = 1736097198U;
int zero = 0;
unsigned int var_20 = 948630508U;
unsigned int var_21 = 2949539311U;
void init() {
}

void checksum() {
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
