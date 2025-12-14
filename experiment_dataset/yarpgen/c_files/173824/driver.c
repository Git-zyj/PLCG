#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)14246;
unsigned int var_2 = 1230996122U;
long long int var_3 = -6391406114220586053LL;
unsigned char var_4 = (unsigned char)109;
unsigned long long int var_6 = 5716177945844664805ULL;
unsigned short var_7 = (unsigned short)58305;
short var_9 = (short)-6199;
int zero = 0;
unsigned int var_10 = 3917130785U;
unsigned char var_11 = (unsigned char)233;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
