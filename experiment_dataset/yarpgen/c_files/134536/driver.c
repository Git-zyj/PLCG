#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1741676261;
int var_3 = 1948263410;
short var_4 = (short)-17281;
short var_5 = (short)6116;
unsigned char var_6 = (unsigned char)44;
int var_7 = 583112232;
unsigned char var_10 = (unsigned char)231;
unsigned char var_11 = (unsigned char)57;
int zero = 0;
unsigned int var_12 = 951684195U;
int var_13 = 310695231;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
