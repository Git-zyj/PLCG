#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)21065;
unsigned long long int var_5 = 14247860103236498901ULL;
unsigned short var_6 = (unsigned short)36711;
unsigned char var_12 = (unsigned char)143;
unsigned char var_17 = (unsigned char)66;
int zero = 0;
short var_18 = (short)-22726;
int var_19 = 896540480;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
