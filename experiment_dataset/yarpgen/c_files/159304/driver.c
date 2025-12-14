#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2350893706U;
short var_4 = (short)-323;
_Bool var_5 = (_Bool)0;
short var_6 = (short)22718;
int zero = 0;
unsigned short var_15 = (unsigned short)28483;
unsigned char var_16 = (unsigned char)182;
unsigned char var_17 = (unsigned char)245;
unsigned char var_18 = (unsigned char)106;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
