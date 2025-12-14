#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)142;
unsigned short var_3 = (unsigned short)26506;
int var_5 = -155152133;
unsigned long long int var_7 = 12990466352702191955ULL;
int zero = 0;
int var_14 = 970090246;
unsigned int var_15 = 317505215U;
int var_16 = 1044570376;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
