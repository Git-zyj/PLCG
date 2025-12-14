#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4679009947914618029LL;
unsigned int var_7 = 1839476280U;
int var_11 = -2015719291;
unsigned short var_12 = (unsigned short)58383;
signed char var_14 = (signed char)92;
int zero = 0;
unsigned char var_17 = (unsigned char)93;
unsigned char var_18 = (unsigned char)27;
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
