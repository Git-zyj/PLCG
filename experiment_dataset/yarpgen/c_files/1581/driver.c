#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 18058640953867851266ULL;
short var_3 = (short)-20274;
unsigned char var_4 = (unsigned char)176;
int zero = 0;
unsigned char var_12 = (unsigned char)210;
short var_13 = (short)17888;
unsigned short var_14 = (unsigned short)28194;
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
