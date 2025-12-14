#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)186;
unsigned long long int var_2 = 2231540163568571453ULL;
long long int var_4 = -1776334009674495865LL;
short var_5 = (short)-7257;
unsigned int var_6 = 1097349651U;
long long int var_8 = -123144012810076004LL;
long long int var_9 = 7268512600814546422LL;
int zero = 0;
long long int var_10 = -3603894782520576746LL;
int var_11 = -583391048;
unsigned char var_12 = (unsigned char)123;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
