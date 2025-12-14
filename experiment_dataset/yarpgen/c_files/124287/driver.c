#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-23629;
short var_2 = (short)-20264;
short var_4 = (short)6824;
unsigned int var_10 = 1860772242U;
unsigned int var_13 = 120893696U;
int zero = 0;
unsigned char var_19 = (unsigned char)10;
unsigned int var_20 = 7720344U;
unsigned int var_21 = 1643611558U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
