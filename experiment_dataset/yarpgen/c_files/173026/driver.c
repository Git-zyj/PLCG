#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_2 = (short)-28988;
unsigned int var_3 = 1177186998U;
int var_4 = 1161725616;
short var_5 = (short)-13861;
unsigned long long int var_6 = 798815552504579679ULL;
unsigned int var_8 = 620920276U;
unsigned int var_11 = 4276647193U;
int zero = 0;
_Bool var_14 = (_Bool)1;
short var_15 = (short)-789;
unsigned char var_16 = (unsigned char)242;
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
