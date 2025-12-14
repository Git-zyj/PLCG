#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)231;
unsigned int var_4 = 3087384685U;
unsigned int var_7 = 3034318038U;
unsigned int var_10 = 2260256149U;
unsigned int var_12 = 977999173U;
unsigned char var_13 = (unsigned char)238;
int zero = 0;
unsigned int var_14 = 2518645204U;
unsigned int var_15 = 1867569162U;
unsigned long long int var_16 = 9982637529806366884ULL;
short var_17 = (short)24526;
signed char var_18 = (signed char)-54;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
