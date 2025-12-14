#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)34956;
int var_1 = 1116497171;
short var_4 = (short)31208;
int var_7 = -2036007258;
short var_10 = (short)19137;
short var_11 = (short)-20821;
short var_12 = (short)32157;
unsigned short var_13 = (unsigned short)35145;
int zero = 0;
int var_14 = -282371426;
short var_15 = (short)16574;
unsigned short var_16 = (unsigned short)57870;
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
