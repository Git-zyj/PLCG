#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)126;
unsigned int var_2 = 2201278995U;
signed char var_4 = (signed char)108;
signed char var_6 = (signed char)-68;
signed char var_8 = (signed char)125;
unsigned int var_10 = 3516828933U;
int zero = 0;
unsigned short var_11 = (unsigned short)40880;
unsigned long long int var_12 = 1776471229378932944ULL;
void init() {
}

void checksum() {
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
