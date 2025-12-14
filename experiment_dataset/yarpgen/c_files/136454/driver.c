#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_7 = (unsigned char)58;
int var_9 = -421931897;
unsigned short var_10 = (unsigned short)60598;
unsigned char var_11 = (unsigned char)156;
int zero = 0;
unsigned short var_14 = (unsigned short)3956;
unsigned char var_15 = (unsigned char)90;
unsigned char var_16 = (unsigned char)255;
unsigned char var_17 = (unsigned char)136;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
