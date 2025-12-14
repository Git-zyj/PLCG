#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)25443;
int var_5 = -1864853747;
short var_11 = (short)985;
int var_13 = 856266751;
signed char var_15 = (signed char)-8;
int zero = 0;
signed char var_16 = (signed char)-99;
short var_17 = (short)-5825;
unsigned short var_18 = (unsigned short)50112;
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
