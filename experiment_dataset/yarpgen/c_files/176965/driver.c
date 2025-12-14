#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)166;
signed char var_7 = (signed char)-54;
signed char var_10 = (signed char)-41;
unsigned short var_11 = (unsigned short)7506;
int zero = 0;
int var_14 = 1645783218;
unsigned short var_15 = (unsigned short)12163;
unsigned short var_16 = (unsigned short)2520;
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
