#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned char var_3 = (unsigned char)6;
short var_7 = (short)15832;
int var_8 = 1757345837;
signed char var_9 = (signed char)33;
unsigned char var_10 = (unsigned char)239;
int zero = 0;
unsigned char var_11 = (unsigned char)173;
unsigned char var_12 = (unsigned char)213;
unsigned long long int var_13 = 15040843042694756224ULL;
unsigned char var_14 = (unsigned char)13;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
