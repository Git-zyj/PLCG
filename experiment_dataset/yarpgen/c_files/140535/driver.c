#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)4070;
unsigned int var_4 = 1677895458U;
unsigned short var_6 = (unsigned short)8157;
short var_10 = (short)29159;
_Bool var_12 = (_Bool)0;
int zero = 0;
unsigned int var_16 = 1576356278U;
unsigned short var_17 = (unsigned short)22900;
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
