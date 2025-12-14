#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)22222;
unsigned char var_2 = (unsigned char)241;
short var_3 = (short)-425;
short var_4 = (short)-4081;
int var_5 = 874668973;
unsigned short var_8 = (unsigned short)29279;
short var_9 = (short)22011;
int zero = 0;
unsigned short var_10 = (unsigned short)3364;
unsigned long long int var_11 = 4267038995280594547ULL;
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
