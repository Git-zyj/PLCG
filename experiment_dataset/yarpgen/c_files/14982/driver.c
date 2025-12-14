#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)231;
unsigned short var_2 = (unsigned short)35889;
unsigned char var_7 = (unsigned char)79;
unsigned char var_11 = (unsigned char)4;
unsigned short var_12 = (unsigned short)18844;
int zero = 0;
unsigned char var_14 = (unsigned char)244;
unsigned short var_15 = (unsigned short)52761;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
