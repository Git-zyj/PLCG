#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2095190931U;
unsigned int var_5 = 3629761768U;
short var_7 = (short)3582;
short var_9 = (short)-32335;
int zero = 0;
long long int var_10 = 6480883611416692637LL;
unsigned char var_11 = (unsigned char)191;
int var_12 = -1833770505;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
