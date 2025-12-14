#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)192;
unsigned short var_3 = (unsigned short)27840;
int var_7 = -597226536;
unsigned int var_13 = 912861514U;
_Bool var_14 = (_Bool)0;
unsigned int var_15 = 2130616297U;
int zero = 0;
unsigned char var_19 = (unsigned char)117;
short var_20 = (short)-23315;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
