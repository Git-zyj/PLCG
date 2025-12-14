#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)63043;
unsigned short var_1 = (unsigned short)63304;
short var_3 = (short)24071;
unsigned short var_7 = (unsigned short)33566;
long long int var_10 = -7711172274197348295LL;
unsigned int var_15 = 2658960549U;
signed char var_16 = (signed char)-81;
int zero = 0;
unsigned short var_17 = (unsigned short)7338;
unsigned int var_18 = 2488098274U;
short var_19 = (short)-18787;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
