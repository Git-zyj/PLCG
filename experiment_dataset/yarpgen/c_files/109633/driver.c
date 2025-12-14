#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)28758;
signed char var_1 = (signed char)74;
short var_4 = (short)971;
short var_5 = (short)23254;
short var_6 = (short)-21941;
unsigned long long int var_7 = 8950358979345921827ULL;
short var_8 = (short)-7886;
unsigned short var_9 = (unsigned short)55328;
unsigned int var_11 = 2710591569U;
unsigned long long int var_12 = 9722556818794503162ULL;
int zero = 0;
unsigned short var_13 = (unsigned short)22036;
unsigned long long int var_14 = 9215890705056929207ULL;
unsigned short var_15 = (unsigned short)5503;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
