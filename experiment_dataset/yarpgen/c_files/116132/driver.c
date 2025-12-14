#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 8222677567656341759LL;
unsigned short var_3 = (unsigned short)5516;
unsigned char var_5 = (unsigned char)71;
short var_6 = (short)-5489;
unsigned short var_7 = (unsigned short)6512;
unsigned long long int var_9 = 9228516947661970745ULL;
short var_11 = (short)-5239;
int zero = 0;
int var_12 = 1106573030;
unsigned short var_13 = (unsigned short)3549;
unsigned char var_14 = (unsigned char)194;
unsigned char var_15 = (unsigned char)65;
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
