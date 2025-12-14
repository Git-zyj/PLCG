#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)31609;
unsigned short var_5 = (unsigned short)7119;
unsigned short var_6 = (unsigned short)43603;
short var_8 = (short)19020;
int var_15 = 1185532822;
int zero = 0;
unsigned short var_16 = (unsigned short)61666;
signed char var_17 = (signed char)-35;
unsigned char var_18 = (unsigned char)252;
unsigned short var_19 = (unsigned short)45320;
void init() {
}

void checksum() {
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
