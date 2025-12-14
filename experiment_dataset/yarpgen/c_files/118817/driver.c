#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3221081992U;
unsigned short var_1 = (unsigned short)52897;
int var_4 = -443261608;
unsigned int var_6 = 2904841255U;
unsigned long long int var_10 = 9792789085254266164ULL;
int zero = 0;
unsigned char var_16 = (unsigned char)246;
unsigned int var_17 = 623565206U;
void init() {
}

void checksum() {
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
