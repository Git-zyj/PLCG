#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)5178;
unsigned long long int var_6 = 4436798752602177564ULL;
int var_11 = 1556262044;
unsigned char var_13 = (unsigned char)9;
int zero = 0;
signed char var_14 = (signed char)54;
unsigned int var_15 = 1149371478U;
unsigned char var_16 = (unsigned char)103;
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
