#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)105;
int var_3 = -1421597096;
unsigned short var_4 = (unsigned short)15257;
unsigned short var_5 = (unsigned short)10349;
int var_8 = -367404354;
int var_10 = 1865156945;
int zero = 0;
unsigned char var_13 = (unsigned char)38;
short var_14 = (short)-16281;
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
