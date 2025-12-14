#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1752659489;
unsigned int var_3 = 128114881U;
unsigned short var_5 = (unsigned short)28805;
int var_10 = 74328235;
_Bool var_11 = (_Bool)1;
signed char var_13 = (signed char)80;
int zero = 0;
short var_16 = (short)29125;
int var_17 = 812050096;
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
