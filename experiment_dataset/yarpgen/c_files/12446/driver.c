#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 7692803518856389181ULL;
unsigned char var_5 = (unsigned char)24;
long long int var_17 = -731834418731003866LL;
unsigned char var_18 = (unsigned char)172;
int zero = 0;
short var_19 = (short)-21132;
unsigned int var_20 = 1476739091U;
unsigned int var_21 = 2556389066U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
