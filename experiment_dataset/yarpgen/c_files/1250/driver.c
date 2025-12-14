#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)239;
int var_3 = -178649660;
short var_6 = (short)13764;
unsigned char var_7 = (unsigned char)168;
unsigned short var_14 = (unsigned short)64527;
unsigned short var_17 = (unsigned short)20219;
int zero = 0;
unsigned short var_18 = (unsigned short)10301;
int var_19 = -668838068;
unsigned char var_20 = (unsigned char)223;
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
