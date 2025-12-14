#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)12670;
short var_3 = (short)10931;
short var_5 = (short)-1271;
short var_7 = (short)5104;
unsigned char var_11 = (unsigned char)57;
int var_12 = -173708970;
int zero = 0;
unsigned char var_13 = (unsigned char)182;
short var_14 = (short)-32452;
unsigned char var_15 = (unsigned char)59;
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
