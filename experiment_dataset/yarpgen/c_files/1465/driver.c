#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)206;
unsigned short var_12 = (unsigned short)29199;
int zero = 0;
long long int var_15 = -8458709414439122345LL;
long long int var_16 = -975064506692083380LL;
long long int var_17 = -2663733785909103035LL;
long long int var_18 = 2204910329993609965LL;
int var_19 = -1870808617;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
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
