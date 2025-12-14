#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)2862;
unsigned short var_3 = (unsigned short)37472;
int var_4 = -747313792;
long long int var_10 = -7330578947693883606LL;
int zero = 0;
int var_14 = -1045131186;
unsigned char var_15 = (unsigned char)33;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
