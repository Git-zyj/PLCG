#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)137;
unsigned char var_6 = (unsigned char)232;
unsigned char var_7 = (unsigned char)176;
unsigned char var_8 = (unsigned char)184;
unsigned char var_9 = (unsigned char)68;
unsigned char var_10 = (unsigned char)125;
unsigned char var_11 = (unsigned char)107;
int zero = 0;
unsigned char var_14 = (unsigned char)112;
unsigned char var_15 = (unsigned char)185;
unsigned char var_16 = (unsigned char)104;
unsigned char var_17 = (unsigned char)157;
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
