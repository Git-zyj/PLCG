#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1335126603U;
unsigned int var_8 = 2801128238U;
long long int var_9 = 6541937117479019171LL;
long long int var_12 = -2616887143798940624LL;
unsigned char var_15 = (unsigned char)14;
short var_16 = (short)15180;
int zero = 0;
signed char var_17 = (signed char)11;
long long int var_18 = -4152388420034177654LL;
unsigned char var_19 = (unsigned char)190;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
