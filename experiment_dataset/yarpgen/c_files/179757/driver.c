#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -908255790;
unsigned short var_4 = (unsigned short)20492;
unsigned char var_5 = (unsigned char)221;
int var_8 = -430084194;
unsigned char var_9 = (unsigned char)151;
unsigned char var_10 = (unsigned char)248;
unsigned int var_11 = 435036386U;
int zero = 0;
unsigned char var_14 = (unsigned char)215;
unsigned int var_15 = 4216540985U;
void init() {
}

void checksum() {
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
