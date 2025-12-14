#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 478694687875744030LL;
short var_3 = (short)-15065;
unsigned long long int var_4 = 942141323078208189ULL;
unsigned short var_7 = (unsigned short)8989;
int var_8 = 223694130;
int zero = 0;
unsigned char var_10 = (unsigned char)248;
short var_11 = (short)-27440;
unsigned short var_12 = (unsigned short)3236;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
