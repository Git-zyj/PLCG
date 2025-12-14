#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
short var_4 = (short)-6487;
unsigned char var_6 = (unsigned char)235;
int var_11 = -1478791619;
unsigned char var_14 = (unsigned char)187;
int zero = 0;
short var_15 = (short)-30934;
_Bool var_16 = (_Bool)0;
short var_17 = (short)-15271;
unsigned short var_18 = (unsigned short)18319;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
