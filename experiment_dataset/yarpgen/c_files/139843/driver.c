#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 1996676022;
_Bool var_10 = (_Bool)0;
unsigned char var_11 = (unsigned char)73;
int var_15 = 1947987227;
int zero = 0;
signed char var_16 = (signed char)-42;
signed char var_17 = (signed char)-65;
signed char var_18 = (signed char)56;
unsigned int var_19 = 41503733U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
