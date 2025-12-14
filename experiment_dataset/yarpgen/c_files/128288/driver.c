#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_8 = -1253859821583825665LL;
unsigned int var_9 = 321810866U;
unsigned int var_10 = 3116756454U;
int zero = 0;
unsigned int var_15 = 2741516414U;
unsigned int var_16 = 1585956183U;
long long int var_17 = -5120494279790102014LL;
void init() {
}

void checksum() {
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
