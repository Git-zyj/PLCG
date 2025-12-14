#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)86;
unsigned int var_7 = 1884309276U;
short var_10 = (short)-9210;
short var_14 = (short)-9268;
unsigned long long int var_16 = 11252318944835342738ULL;
int zero = 0;
signed char var_20 = (signed char)10;
int var_21 = -1919434238;
unsigned long long int var_22 = 5101660805826052619ULL;
unsigned char var_23 = (unsigned char)6;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
