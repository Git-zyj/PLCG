#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -387496372;
signed char var_5 = (signed char)-97;
unsigned long long int var_10 = 4340830343287491192ULL;
long long int var_13 = -8646927516645348374LL;
unsigned int var_14 = 3375037622U;
int var_15 = -863576200;
long long int var_17 = 6709140440245236521LL;
int zero = 0;
unsigned char var_19 = (unsigned char)32;
long long int var_20 = 6717084059708074757LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
