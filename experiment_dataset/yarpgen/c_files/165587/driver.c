#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)151;
unsigned char var_3 = (unsigned char)126;
unsigned char var_4 = (unsigned char)207;
unsigned char var_5 = (unsigned char)81;
unsigned char var_6 = (unsigned char)14;
unsigned char var_13 = (unsigned char)173;
int zero = 0;
unsigned char var_14 = (unsigned char)74;
unsigned char var_15 = (unsigned char)85;
unsigned char var_16 = (unsigned char)215;
unsigned char var_17 = (unsigned char)208;
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
