#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)59;
unsigned char var_6 = (unsigned char)204;
unsigned char var_7 = (unsigned char)112;
unsigned char var_13 = (unsigned char)65;
unsigned char var_15 = (unsigned char)218;
int zero = 0;
unsigned char var_16 = (unsigned char)199;
unsigned char var_17 = (unsigned char)189;
unsigned char var_18 = (unsigned char)34;
unsigned char var_19 = (unsigned char)231;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
