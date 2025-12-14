#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-28;
short var_2 = (short)6113;
long long int var_4 = 564500595920532500LL;
signed char var_10 = (signed char)69;
long long int var_12 = 7482539887306696119LL;
int zero = 0;
long long int var_14 = -5277471939594858742LL;
unsigned char var_15 = (unsigned char)83;
unsigned char var_16 = (unsigned char)14;
unsigned char var_17 = (unsigned char)100;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
