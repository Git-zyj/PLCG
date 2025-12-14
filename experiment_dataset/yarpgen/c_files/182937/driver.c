#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2726366123U;
_Bool var_1 = (_Bool)0;
unsigned short var_2 = (unsigned short)25143;
short var_3 = (short)-19930;
short var_5 = (short)-32459;
unsigned short var_11 = (unsigned short)25149;
short var_12 = (short)25334;
int zero = 0;
short var_15 = (short)-17553;
unsigned short var_16 = (unsigned short)21164;
short var_17 = (short)24286;
void init() {
}

void checksum() {
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
