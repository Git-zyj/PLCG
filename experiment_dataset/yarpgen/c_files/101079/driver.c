#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)33964;
unsigned char var_1 = (unsigned char)252;
unsigned int var_18 = 256568082U;
int zero = 0;
unsigned char var_19 = (unsigned char)9;
unsigned char var_20 = (unsigned char)183;
int var_21 = 88583079;
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
