#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)27166;
signed char var_3 = (signed char)-99;
unsigned int var_6 = 2172685279U;
unsigned int var_8 = 1134254330U;
unsigned char var_10 = (unsigned char)220;
int zero = 0;
unsigned char var_16 = (unsigned char)120;
unsigned char var_17 = (unsigned char)146;
void init() {
}

void checksum() {
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
