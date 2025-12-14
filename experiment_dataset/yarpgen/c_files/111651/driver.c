#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 1170649180U;
unsigned short var_7 = (unsigned short)30146;
int var_8 = -1952963130;
unsigned long long int var_10 = 1621103911834088272ULL;
int zero = 0;
unsigned char var_15 = (unsigned char)255;
short var_16 = (short)25262;
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
