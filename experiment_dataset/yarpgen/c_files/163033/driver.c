#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -8216013883357442516LL;
_Bool var_5 = (_Bool)1;
_Bool var_6 = (_Bool)1;
short var_11 = (short)12905;
unsigned char var_12 = (unsigned char)59;
int zero = 0;
short var_14 = (short)6393;
_Bool var_15 = (_Bool)0;
short var_16 = (short)6061;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
