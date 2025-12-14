#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)210;
unsigned char var_13 = (unsigned char)28;
unsigned char var_15 = (unsigned char)120;
unsigned char var_16 = (unsigned char)178;
unsigned char var_17 = (unsigned char)85;
int zero = 0;
unsigned char var_18 = (unsigned char)21;
unsigned char var_19 = (unsigned char)53;
void init() {
}

void checksum() {
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
