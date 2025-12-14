#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)236;
int var_1 = -157815889;
int var_3 = 888681671;
unsigned char var_4 = (unsigned char)178;
unsigned long long int var_5 = 17317852381996722358ULL;
unsigned char var_6 = (unsigned char)222;
unsigned char var_7 = (unsigned char)44;
unsigned char var_8 = (unsigned char)160;
int var_10 = 621422654;
int var_11 = -2034662719;
int var_12 = 144712595;
int zero = 0;
short var_14 = (short)18734;
unsigned short var_15 = (unsigned short)30415;
unsigned char var_16 = (unsigned char)157;
int var_17 = -1875788062;
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
