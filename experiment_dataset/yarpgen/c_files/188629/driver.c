#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 296355482;
signed char var_4 = (signed char)-127;
_Bool var_11 = (_Bool)1;
short var_12 = (short)24648;
unsigned short var_14 = (unsigned short)21642;
int var_15 = -1877435465;
int zero = 0;
unsigned int var_17 = 415508420U;
int var_18 = -1992589146;
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
