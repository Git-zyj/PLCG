#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)1;
signed char var_7 = (signed char)93;
short var_9 = (short)8145;
long long int var_11 = -1214921932994874848LL;
int zero = 0;
long long int var_16 = 7291451232371996628LL;
long long int var_17 = 2791711300861787400LL;
void init() {
}

void checksum() {
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
