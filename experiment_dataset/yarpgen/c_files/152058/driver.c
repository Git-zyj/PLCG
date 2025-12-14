#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)91;
signed char var_3 = (signed char)120;
signed char var_5 = (signed char)-70;
short var_7 = (short)17899;
unsigned long long int var_10 = 10816085190248315814ULL;
long long int var_14 = 2787371484663395294LL;
int zero = 0;
short var_16 = (short)-28520;
unsigned long long int var_17 = 7924390236640987769ULL;
unsigned char var_18 = (unsigned char)78;
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
