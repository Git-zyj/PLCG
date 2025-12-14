#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)4508;
unsigned long long int var_4 = 13810724772087415910ULL;
signed char var_7 = (signed char)38;
int var_12 = 1412660152;
int var_13 = -192450337;
unsigned int var_15 = 1981591653U;
int zero = 0;
int var_18 = -647727548;
int var_19 = 1840980880;
short var_20 = (short)2255;
signed char var_21 = (signed char)78;
short var_22 = (short)26934;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
