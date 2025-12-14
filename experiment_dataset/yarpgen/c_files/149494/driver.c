#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 2031545597;
unsigned char var_2 = (unsigned char)62;
int var_3 = 604208050;
short var_6 = (short)-32602;
short var_9 = (short)-16896;
long long int var_10 = -1554371495227785869LL;
short var_11 = (short)2426;
int zero = 0;
int var_12 = -255938318;
short var_13 = (short)26719;
unsigned char var_14 = (unsigned char)243;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
