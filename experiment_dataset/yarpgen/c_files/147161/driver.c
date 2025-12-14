#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)148;
unsigned char var_3 = (unsigned char)184;
unsigned char var_4 = (unsigned char)162;
unsigned char var_7 = (unsigned char)252;
unsigned char var_8 = (unsigned char)107;
unsigned char var_11 = (unsigned char)34;
int zero = 0;
unsigned char var_16 = (unsigned char)19;
unsigned char var_17 = (unsigned char)165;
unsigned char var_18 = (unsigned char)111;
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
