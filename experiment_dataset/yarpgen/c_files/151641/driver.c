#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1529597342;
unsigned short var_1 = (unsigned short)58629;
unsigned int var_2 = 3705692816U;
unsigned int var_3 = 3078272653U;
unsigned int var_7 = 3916752626U;
unsigned short var_8 = (unsigned short)38144;
int zero = 0;
unsigned int var_11 = 1905527538U;
unsigned char var_12 = (unsigned char)75;
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
