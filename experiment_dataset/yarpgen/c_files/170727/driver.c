#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-24781;
unsigned char var_1 = (unsigned char)84;
unsigned short var_4 = (unsigned short)12656;
signed char var_6 = (signed char)122;
unsigned short var_8 = (unsigned short)64180;
unsigned short var_9 = (unsigned short)35004;
unsigned char var_10 = (unsigned char)114;
int zero = 0;
unsigned char var_12 = (unsigned char)187;
unsigned int var_13 = 2480045089U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
