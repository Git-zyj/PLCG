#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)15986;
unsigned char var_1 = (unsigned char)148;
unsigned short var_5 = (unsigned short)11255;
signed char var_14 = (signed char)107;
int zero = 0;
signed char var_16 = (signed char)-81;
unsigned char var_17 = (unsigned char)161;
unsigned char var_18 = (unsigned char)213;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
