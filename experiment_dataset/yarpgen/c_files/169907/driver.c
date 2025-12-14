#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)55387;
short var_6 = (short)29118;
int var_12 = 2114548915;
int var_13 = 1198375629;
short var_15 = (short)5952;
int zero = 0;
unsigned int var_17 = 2975524352U;
unsigned short var_18 = (unsigned short)3950;
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
