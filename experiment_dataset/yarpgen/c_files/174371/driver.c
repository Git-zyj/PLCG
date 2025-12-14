#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 3827258428U;
unsigned char var_7 = (unsigned char)118;
unsigned short var_8 = (unsigned short)30240;
unsigned short var_12 = (unsigned short)11780;
int zero = 0;
unsigned int var_15 = 4068864426U;
unsigned long long int var_16 = 2354199718631747389ULL;
void init() {
}

void checksum() {
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
