#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)110;
int var_1 = -1800602778;
int var_2 = 1773795466;
signed char var_13 = (signed char)106;
unsigned short var_14 = (unsigned short)63811;
short var_17 = (short)-7680;
int var_18 = -319318040;
int zero = 0;
short var_20 = (short)27170;
short var_21 = (short)27432;
long long int var_22 = 5492343148295140682LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
