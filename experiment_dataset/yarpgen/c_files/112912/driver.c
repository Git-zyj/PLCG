#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)3;
unsigned long long int var_2 = 538393692458012471ULL;
signed char var_3 = (signed char)-34;
long long int var_4 = 2916817602328626401LL;
signed char var_8 = (signed char)10;
unsigned int var_10 = 2751194828U;
unsigned char var_11 = (unsigned char)227;
unsigned int var_13 = 3399025953U;
int zero = 0;
signed char var_16 = (signed char)-7;
unsigned int var_17 = 1280773961U;
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
