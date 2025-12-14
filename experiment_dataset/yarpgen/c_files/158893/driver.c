#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-13656;
int var_4 = 125051782;
int var_6 = 1873979583;
unsigned short var_9 = (unsigned short)45374;
unsigned char var_10 = (unsigned char)185;
int zero = 0;
short var_15 = (short)-19561;
unsigned char var_16 = (unsigned char)85;
unsigned char var_17 = (unsigned char)5;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
