#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)24339;
unsigned char var_8 = (unsigned char)161;
unsigned short var_14 = (unsigned short)58130;
unsigned char var_18 = (unsigned char)147;
int zero = 0;
unsigned char var_19 = (unsigned char)91;
unsigned int var_20 = 1714520565U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
