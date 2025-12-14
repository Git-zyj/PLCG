#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 282246976U;
short var_4 = (short)-14252;
unsigned char var_5 = (unsigned char)40;
short var_8 = (short)18822;
unsigned short var_10 = (unsigned short)12668;
short var_12 = (short)-3782;
signed char var_14 = (signed char)-94;
unsigned short var_15 = (unsigned short)44219;
int zero = 0;
unsigned char var_20 = (unsigned char)250;
unsigned char var_21 = (unsigned char)143;
void init() {
}

void checksum() {
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
