#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)128;
short var_2 = (short)-25221;
unsigned char var_6 = (unsigned char)198;
unsigned char var_10 = (unsigned char)1;
int zero = 0;
int var_11 = 794414905;
int var_12 = -1509067502;
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
