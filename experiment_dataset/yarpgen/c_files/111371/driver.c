#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 314694782;
unsigned int var_1 = 122575677U;
int var_2 = -227532267;
unsigned char var_4 = (unsigned char)52;
signed char var_9 = (signed char)-36;
int zero = 0;
signed char var_11 = (signed char)66;
signed char var_12 = (signed char)26;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
