#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)30;
unsigned char var_7 = (unsigned char)103;
unsigned long long int var_8 = 12783667927559422122ULL;
short var_12 = (short)-23167;
signed char var_13 = (signed char)-120;
int zero = 0;
short var_15 = (short)-389;
unsigned int var_16 = 1556553331U;
int var_17 = -1754813619;
unsigned int var_18 = 159245376U;
void init() {
}

void checksum() {
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
