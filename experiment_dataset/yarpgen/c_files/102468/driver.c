#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -923598505;
int var_5 = -2088632266;
unsigned char var_6 = (unsigned char)225;
long long int var_9 = -7045647332318949933LL;
unsigned short var_11 = (unsigned short)65120;
unsigned int var_12 = 2056178445U;
int zero = 0;
int var_15 = 1816189808;
short var_16 = (short)-4931;
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
