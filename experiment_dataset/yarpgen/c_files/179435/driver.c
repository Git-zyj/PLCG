#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)12354;
unsigned int var_10 = 1314895020U;
short var_14 = (short)11791;
int zero = 0;
unsigned int var_17 = 3895131900U;
short var_18 = (short)29992;
unsigned char var_19 = (unsigned char)62;
void init() {
}

void checksum() {
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
