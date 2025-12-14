#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)38;
short var_4 = (short)-29014;
short var_5 = (short)-8686;
unsigned char var_7 = (unsigned char)73;
unsigned char var_10 = (unsigned char)107;
short var_11 = (short)7759;
int zero = 0;
long long int var_12 = 6222688037645743603LL;
short var_13 = (short)6334;
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
