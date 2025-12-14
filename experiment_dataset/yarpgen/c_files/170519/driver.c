#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)129;
unsigned int var_4 = 2653429376U;
short var_8 = (short)1356;
unsigned char var_9 = (unsigned char)45;
int zero = 0;
unsigned int var_14 = 3039521159U;
signed char var_15 = (signed char)-96;
signed char var_16 = (signed char)55;
_Bool var_17 = (_Bool)0;
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
