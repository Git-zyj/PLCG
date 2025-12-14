#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)28142;
_Bool var_10 = (_Bool)0;
short var_11 = (short)687;
unsigned int var_12 = 3489144091U;
int zero = 0;
signed char var_15 = (signed char)52;
int var_16 = 592675978;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
