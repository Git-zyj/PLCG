#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-3;
int var_3 = -1148271973;
unsigned char var_4 = (unsigned char)246;
signed char var_5 = (signed char)-23;
unsigned char var_8 = (unsigned char)97;
unsigned long long int var_12 = 7378105923352730302ULL;
int zero = 0;
unsigned short var_15 = (unsigned short)21689;
unsigned int var_16 = 228961530U;
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
