#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)183;
unsigned char var_4 = (unsigned char)166;
signed char var_5 = (signed char)-117;
short var_7 = (short)-15712;
short var_13 = (short)-30261;
int zero = 0;
int var_17 = -91368564;
short var_18 = (short)4037;
void init() {
}

void checksum() {
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
