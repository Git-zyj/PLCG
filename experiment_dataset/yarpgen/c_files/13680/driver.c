#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 432771053;
signed char var_1 = (signed char)25;
unsigned short var_2 = (unsigned short)51110;
signed char var_3 = (signed char)101;
short var_6 = (short)-31105;
unsigned char var_7 = (unsigned char)190;
unsigned char var_11 = (unsigned char)95;
int zero = 0;
short var_13 = (short)-8978;
unsigned int var_14 = 2033100877U;
void init() {
}

void checksum() {
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
