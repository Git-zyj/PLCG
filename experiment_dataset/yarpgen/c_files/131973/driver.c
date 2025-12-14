#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-9125;
short var_1 = (short)-5634;
long long int var_2 = -1136420309672044537LL;
short var_4 = (short)-15176;
short var_5 = (short)-2370;
int var_7 = 1018102295;
int var_8 = -287273565;
int var_11 = -2073645933;
unsigned int var_13 = 269879687U;
int zero = 0;
int var_15 = -1528563797;
unsigned long long int var_16 = 12790175579285540011ULL;
void init() {
}

void checksum() {
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
