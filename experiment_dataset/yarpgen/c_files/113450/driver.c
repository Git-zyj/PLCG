#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)27525;
unsigned long long int var_1 = 6222584490510609075ULL;
unsigned short var_2 = (unsigned short)34585;
unsigned short var_5 = (unsigned short)28137;
int var_6 = -1100443;
int var_11 = -66757597;
int var_12 = 1814631181;
long long int var_17 = -5682328631497536513LL;
int zero = 0;
unsigned char var_18 = (unsigned char)234;
unsigned short var_19 = (unsigned short)29938;
unsigned char var_20 = (unsigned char)218;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
