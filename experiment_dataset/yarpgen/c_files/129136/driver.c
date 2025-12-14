#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)21920;
signed char var_5 = (signed char)-63;
unsigned long long int var_6 = 8998548715891036808ULL;
unsigned char var_8 = (unsigned char)197;
int zero = 0;
unsigned long long int var_16 = 16306708203380468204ULL;
short var_17 = (short)-6589;
signed char var_18 = (signed char)-48;
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
