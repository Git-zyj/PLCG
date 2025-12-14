#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_4 = 591408097;
short var_5 = (short)30582;
short var_6 = (short)-16512;
int var_9 = -1583965739;
int var_11 = 782855485;
unsigned short var_12 = (unsigned short)47261;
long long int var_13 = 8696494036568219277LL;
long long int var_14 = 4535280907347318243LL;
int zero = 0;
unsigned int var_16 = 2664847713U;
unsigned int var_17 = 2863561696U;
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
