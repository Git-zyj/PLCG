#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3180337543U;
unsigned char var_4 = (unsigned char)220;
unsigned int var_5 = 1482320917U;
unsigned long long int var_17 = 10690076136587877323ULL;
int zero = 0;
unsigned char var_19 = (unsigned char)8;
unsigned short var_20 = (unsigned short)43974;
short var_21 = (short)-10814;
void init() {
}

void checksum() {
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
