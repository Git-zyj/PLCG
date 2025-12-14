#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -237196391914330943LL;
long long int var_5 = -4662919044277223836LL;
signed char var_6 = (signed char)-14;
unsigned int var_8 = 544400213U;
unsigned int var_10 = 81505718U;
unsigned int var_13 = 647306307U;
long long int var_14 = 3188949275751923508LL;
short var_15 = (short)14315;
int zero = 0;
unsigned short var_18 = (unsigned short)17347;
unsigned int var_19 = 2834862735U;
short var_20 = (short)-15618;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
