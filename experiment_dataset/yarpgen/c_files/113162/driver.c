#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2016162762U;
unsigned short var_3 = (unsigned short)48318;
unsigned char var_4 = (unsigned char)67;
unsigned char var_6 = (unsigned char)62;
int zero = 0;
unsigned short var_12 = (unsigned short)43274;
unsigned short var_13 = (unsigned short)19199;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
