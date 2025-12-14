#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)58345;
unsigned char var_2 = (unsigned char)142;
signed char var_12 = (signed char)23;
unsigned short var_13 = (unsigned short)24666;
int zero = 0;
short var_16 = (short)-30261;
unsigned short var_17 = (unsigned short)4654;
signed char var_18 = (signed char)-44;
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
