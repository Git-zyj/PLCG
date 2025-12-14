#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)2;
unsigned char var_1 = (unsigned char)251;
unsigned char var_3 = (unsigned char)165;
unsigned char var_6 = (unsigned char)248;
unsigned char var_8 = (unsigned char)175;
unsigned char var_10 = (unsigned char)231;
unsigned char var_11 = (unsigned char)79;
unsigned char var_12 = (unsigned char)17;
int zero = 0;
unsigned char var_14 = (unsigned char)111;
unsigned char var_15 = (unsigned char)156;
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
