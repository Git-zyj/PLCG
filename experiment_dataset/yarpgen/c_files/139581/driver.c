#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_9 = (_Bool)1;
unsigned char var_11 = (unsigned char)145;
unsigned short var_12 = (unsigned short)45890;
unsigned int var_14 = 569132810U;
int zero = 0;
short var_15 = (short)8260;
long long int var_16 = -9102386434774336921LL;
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
