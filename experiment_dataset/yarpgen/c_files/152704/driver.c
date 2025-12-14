#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)54407;
unsigned int var_7 = 2944081851U;
unsigned char var_9 = (unsigned char)185;
short var_10 = (short)-26684;
int zero = 0;
unsigned short var_13 = (unsigned short)16706;
unsigned char var_14 = (unsigned char)149;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
