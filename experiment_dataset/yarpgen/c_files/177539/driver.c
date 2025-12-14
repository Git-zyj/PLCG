#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)144;
signed char var_7 = (signed char)68;
unsigned char var_11 = (unsigned char)81;
long long int var_14 = 7337570621229394614LL;
signed char var_15 = (signed char)125;
int zero = 0;
short var_16 = (short)-18877;
short var_17 = (short)-23359;
int var_18 = -1720372653;
void init() {
}

void checksum() {
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
