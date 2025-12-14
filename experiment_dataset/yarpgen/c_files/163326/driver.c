#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1469815746151216564ULL;
unsigned long long int var_1 = 2667648270430602331ULL;
int var_2 = 1873447839;
long long int var_3 = 5677255988617748518LL;
unsigned short var_4 = (unsigned short)19198;
unsigned int var_8 = 2012810770U;
long long int var_11 = -64544523573325273LL;
int zero = 0;
long long int var_12 = -4862177408986914223LL;
unsigned int var_13 = 1882756650U;
long long int var_14 = -2450900489399531611LL;
long long int var_15 = -1239884923657009592LL;
unsigned short var_16 = (unsigned short)63168;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
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
