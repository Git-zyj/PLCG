#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)11469;
unsigned short var_2 = (unsigned short)53837;
unsigned short var_5 = (unsigned short)52343;
signed char var_7 = (signed char)26;
unsigned short var_10 = (unsigned short)29766;
unsigned short var_11 = (unsigned short)11776;
int zero = 0;
unsigned short var_12 = (unsigned short)39715;
short var_13 = (short)-21509;
short var_14 = (short)-12133;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
