#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1183413242;
int var_3 = -630051094;
signed char var_4 = (signed char)-57;
unsigned char var_11 = (unsigned char)55;
unsigned char var_13 = (unsigned char)124;
int zero = 0;
int var_14 = 1217776134;
unsigned char var_15 = (unsigned char)20;
unsigned int var_16 = 818616576U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
