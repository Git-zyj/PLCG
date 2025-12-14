#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-26619;
long long int var_4 = -190972090715696231LL;
short var_6 = (short)-4914;
short var_10 = (short)-539;
short var_11 = (short)27919;
int zero = 0;
unsigned short var_12 = (unsigned short)37259;
long long int var_13 = 4063962021769909069LL;
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
