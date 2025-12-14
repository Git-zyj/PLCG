#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -322172075638464243LL;
unsigned char var_4 = (unsigned char)202;
unsigned int var_5 = 335252841U;
unsigned short var_11 = (unsigned short)12583;
unsigned short var_14 = (unsigned short)21825;
unsigned short var_19 = (unsigned short)48500;
int zero = 0;
unsigned int var_20 = 1474162982U;
unsigned int var_21 = 1904291016U;
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
