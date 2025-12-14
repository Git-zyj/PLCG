#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1437577547;
short var_3 = (short)7193;
unsigned short var_11 = (unsigned short)35323;
unsigned char var_13 = (unsigned char)170;
int zero = 0;
unsigned int var_14 = 3945846526U;
int var_15 = -369178122;
_Bool var_16 = (_Bool)0;
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
