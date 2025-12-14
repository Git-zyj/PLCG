#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)46154;
short var_7 = (short)6076;
signed char var_11 = (signed char)-71;
unsigned char var_13 = (unsigned char)192;
signed char var_14 = (signed char)-88;
signed char var_15 = (signed char)-13;
int zero = 0;
_Bool var_16 = (_Bool)1;
signed char var_17 = (signed char)-87;
void init() {
}

void checksum() {
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
