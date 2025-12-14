#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)17;
unsigned char var_2 = (unsigned char)196;
unsigned char var_9 = (unsigned char)95;
unsigned char var_10 = (unsigned char)226;
unsigned char var_12 = (unsigned char)73;
unsigned char var_13 = (unsigned char)37;
unsigned char var_14 = (unsigned char)55;
int zero = 0;
unsigned char var_15 = (unsigned char)74;
unsigned char var_16 = (unsigned char)47;
unsigned char var_17 = (unsigned char)128;
unsigned char var_18 = (unsigned char)227;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
