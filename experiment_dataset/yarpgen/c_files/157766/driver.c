#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)184;
int var_1 = -1105467019;
signed char var_7 = (signed char)23;
unsigned short var_15 = (unsigned short)65203;
int zero = 0;
unsigned short var_19 = (unsigned short)58118;
unsigned int var_20 = 1092345417U;
int var_21 = 1560086797;
void init() {
}

void checksum() {
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
