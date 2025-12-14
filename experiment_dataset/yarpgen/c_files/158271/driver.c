#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)95;
unsigned short var_10 = (unsigned short)388;
unsigned int var_12 = 410388651U;
unsigned short var_13 = (unsigned short)21539;
unsigned char var_15 = (unsigned char)137;
long long int var_16 = -3392295504610174524LL;
int zero = 0;
unsigned int var_17 = 1383254179U;
unsigned int var_18 = 1958190208U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
