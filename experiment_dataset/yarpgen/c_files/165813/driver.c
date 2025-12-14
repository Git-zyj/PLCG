#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -423033965;
int var_2 = 2117575726;
unsigned char var_5 = (unsigned char)238;
unsigned char var_7 = (unsigned char)244;
unsigned char var_8 = (unsigned char)167;
unsigned char var_11 = (unsigned char)69;
int zero = 0;
unsigned char var_12 = (unsigned char)199;
int var_13 = 1939579593;
unsigned char var_14 = (unsigned char)175;
unsigned char var_15 = (unsigned char)231;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
