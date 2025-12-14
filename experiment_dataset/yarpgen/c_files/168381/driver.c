#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3287292747U;
unsigned char var_2 = (unsigned char)198;
int var_3 = 1409036357;
unsigned long long int var_7 = 9969497961983914538ULL;
int var_8 = 913391024;
int zero = 0;
unsigned char var_10 = (unsigned char)36;
unsigned char var_11 = (unsigned char)65;
short var_12 = (short)2994;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
