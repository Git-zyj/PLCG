#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)152;
unsigned char var_10 = (unsigned char)243;
unsigned long long int var_12 = 16710614041150489494ULL;
short var_15 = (short)-28367;
int zero = 0;
unsigned long long int var_16 = 8283482005077909413ULL;
long long int var_17 = -7667188879658167519LL;
unsigned short var_18 = (unsigned short)34952;
unsigned char var_19 = (unsigned char)140;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
