#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)22950;
int var_8 = -312784628;
unsigned int var_11 = 1473689686U;
int zero = 0;
unsigned short var_15 = (unsigned short)2986;
_Bool var_16 = (_Bool)1;
int var_17 = 2110763333;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
