#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 267187304U;
unsigned char var_6 = (unsigned char)252;
unsigned short var_13 = (unsigned short)27767;
long long int var_14 = -5970177248718956328LL;
long long int var_17 = -5202981289506293258LL;
int zero = 0;
int var_18 = 669053519;
short var_19 = (short)-5228;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
