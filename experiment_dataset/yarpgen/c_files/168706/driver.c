#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)-10916;
unsigned char var_7 = (unsigned char)73;
signed char var_12 = (signed char)-8;
int zero = 0;
signed char var_13 = (signed char)91;
unsigned short var_14 = (unsigned short)45675;
unsigned short var_15 = (unsigned short)16075;
void init() {
}

void checksum() {
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
