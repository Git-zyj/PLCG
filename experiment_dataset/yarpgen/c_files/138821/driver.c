#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)30548;
_Bool var_10 = (_Bool)0;
int zero = 0;
unsigned short var_12 = (unsigned short)35866;
signed char var_13 = (signed char)-14;
unsigned char var_14 = (unsigned char)64;
unsigned int var_15 = 807393900U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
