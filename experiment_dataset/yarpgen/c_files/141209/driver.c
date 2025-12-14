#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)14841;
int var_5 = -970884821;
int var_6 = 662668347;
unsigned short var_11 = (unsigned short)23239;
int zero = 0;
short var_15 = (short)-9052;
unsigned char var_16 = (unsigned char)32;
unsigned short var_17 = (unsigned short)10048;
unsigned char var_18 = (unsigned char)34;
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
