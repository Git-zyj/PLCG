#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1685186208;
unsigned long long int var_4 = 15121372449686631536ULL;
short var_18 = (short)30616;
int zero = 0;
short var_20 = (short)-30284;
unsigned char var_21 = (unsigned char)107;
void init() {
}

void checksum() {
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
