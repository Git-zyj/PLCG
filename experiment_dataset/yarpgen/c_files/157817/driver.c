#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)6589;
unsigned short var_6 = (unsigned short)26253;
int var_8 = 560872735;
unsigned char var_11 = (unsigned char)115;
int zero = 0;
unsigned short var_14 = (unsigned short)61981;
long long int var_15 = 8953091263266731220LL;
int var_16 = -1059335229;
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
