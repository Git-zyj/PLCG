#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)32;
unsigned char var_3 = (unsigned char)8;
unsigned char var_4 = (unsigned char)193;
unsigned char var_5 = (unsigned char)44;
unsigned char var_7 = (unsigned char)65;
unsigned char var_9 = (unsigned char)201;
unsigned char var_15 = (unsigned char)149;
int zero = 0;
unsigned char var_16 = (unsigned char)229;
unsigned char var_17 = (unsigned char)24;
unsigned char var_18 = (unsigned char)226;
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
