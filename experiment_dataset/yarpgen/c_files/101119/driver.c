#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)54006;
unsigned int var_3 = 3950505906U;
int var_8 = -564501685;
unsigned short var_12 = (unsigned short)33586;
int zero = 0;
unsigned char var_15 = (unsigned char)142;
unsigned short var_16 = (unsigned short)19802;
int var_17 = 1478659456;
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
