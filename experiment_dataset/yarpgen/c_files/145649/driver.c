#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1641056491;
int var_7 = -1083909687;
_Bool var_8 = (_Bool)0;
_Bool var_12 = (_Bool)1;
_Bool var_14 = (_Bool)0;
unsigned char var_18 = (unsigned char)91;
int zero = 0;
short var_20 = (short)6805;
_Bool var_21 = (_Bool)1;
short var_22 = (short)27363;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
