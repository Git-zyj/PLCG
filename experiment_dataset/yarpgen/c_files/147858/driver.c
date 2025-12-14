#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)33194;
unsigned long long int var_2 = 16960225387904345854ULL;
unsigned short var_5 = (unsigned short)17778;
unsigned char var_6 = (unsigned char)7;
signed char var_8 = (signed char)92;
short var_10 = (short)24572;
unsigned short var_11 = (unsigned short)11951;
unsigned short var_12 = (unsigned short)10425;
unsigned short var_13 = (unsigned short)58067;
int zero = 0;
int var_14 = 274474161;
short var_15 = (short)17761;
unsigned char var_16 = (unsigned char)72;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
