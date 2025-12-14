#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -166004025;
short var_2 = (short)-23619;
unsigned char var_4 = (unsigned char)183;
unsigned long long int var_5 = 1388302022741697032ULL;
signed char var_6 = (signed char)-16;
int var_7 = -1514942742;
int zero = 0;
long long int var_11 = 2992311737155030950LL;
int var_12 = 795290413;
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
