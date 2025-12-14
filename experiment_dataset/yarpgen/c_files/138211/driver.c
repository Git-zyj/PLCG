#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 7013723157408778114ULL;
unsigned long long int var_4 = 9937592453210769296ULL;
unsigned int var_6 = 1219177358U;
long long int var_8 = 5517554350009080820LL;
int var_9 = -1629144283;
unsigned int var_11 = 2282603644U;
unsigned char var_15 = (unsigned char)247;
int zero = 0;
unsigned short var_16 = (unsigned short)44310;
int var_17 = -1528286308;
short var_18 = (short)28378;
unsigned int var_19 = 256121754U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
