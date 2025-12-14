#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)11092;
signed char var_8 = (signed char)101;
int var_9 = 1474407143;
int zero = 0;
unsigned int var_14 = 4211871452U;
unsigned int var_15 = 2460800261U;
long long int var_16 = -8830583376254377797LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
