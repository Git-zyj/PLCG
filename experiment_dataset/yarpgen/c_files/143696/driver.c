#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3603777488898764258ULL;
long long int var_5 = 7984221691998855033LL;
int var_6 = 964140769;
unsigned long long int var_9 = 2551993543880466284ULL;
unsigned int var_10 = 390733118U;
unsigned char var_12 = (unsigned char)84;
unsigned short var_13 = (unsigned short)33597;
unsigned char var_15 = (unsigned char)1;
int zero = 0;
int var_17 = -986420993;
int var_18 = 1387698984;
unsigned char var_19 = (unsigned char)28;
void init() {
}

void checksum() {
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
