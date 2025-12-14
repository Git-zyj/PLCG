#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_7 = (short)13831;
int var_10 = 495856019;
unsigned short var_11 = (unsigned short)16666;
unsigned char var_13 = (unsigned char)27;
int var_15 = 225059091;
short var_16 = (short)2385;
int zero = 0;
unsigned char var_18 = (unsigned char)21;
unsigned int var_19 = 778798107U;
unsigned char var_20 = (unsigned char)166;
unsigned short var_21 = (unsigned short)6925;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
