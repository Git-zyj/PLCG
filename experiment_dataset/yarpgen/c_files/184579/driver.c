#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)51726;
_Bool var_1 = (_Bool)1;
signed char var_3 = (signed char)-56;
short var_4 = (short)16096;
unsigned char var_5 = (unsigned char)210;
signed char var_6 = (signed char)114;
int var_12 = 1851568182;
int zero = 0;
unsigned long long int var_14 = 7639423980265069311ULL;
short var_15 = (short)7418;
unsigned char var_16 = (unsigned char)193;
short var_17 = (short)28214;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
