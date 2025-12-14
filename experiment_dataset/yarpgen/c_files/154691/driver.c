#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2667955932U;
unsigned char var_9 = (unsigned char)147;
long long int var_16 = -7671249550187871627LL;
int zero = 0;
unsigned short var_17 = (unsigned short)5142;
unsigned char var_18 = (unsigned char)162;
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
