#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)15043;
unsigned int var_1 = 3419891951U;
unsigned int var_7 = 842399055U;
unsigned long long int var_11 = 15483400337937491219ULL;
unsigned int var_12 = 1429649049U;
short var_13 = (short)-18496;
unsigned long long int var_17 = 8356995659812711171ULL;
int zero = 0;
unsigned char var_18 = (unsigned char)162;
unsigned long long int var_19 = 14376196883377069031ULL;
unsigned char var_20 = (unsigned char)171;
unsigned long long int var_21 = 5387686405655928173ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
