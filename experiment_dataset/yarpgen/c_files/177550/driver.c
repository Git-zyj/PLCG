#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-1428;
int var_9 = 433400256;
unsigned char var_14 = (unsigned char)176;
int zero = 0;
unsigned char var_15 = (unsigned char)129;
unsigned char var_16 = (unsigned char)52;
int var_17 = -1964482198;
void init() {
}

void checksum() {
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
