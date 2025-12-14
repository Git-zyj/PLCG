#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-27484;
short var_2 = (short)27364;
int var_3 = -442397100;
int var_5 = 1554578514;
unsigned char var_6 = (unsigned char)158;
unsigned char var_10 = (unsigned char)28;
int zero = 0;
unsigned char var_11 = (unsigned char)252;
long long int var_12 = -8611900572179097052LL;
long long int var_13 = 8941833201713543642LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
