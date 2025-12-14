#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_10 = -5533939508462276081LL;
unsigned char var_11 = (unsigned char)55;
unsigned int var_15 = 3804841875U;
unsigned short var_16 = (unsigned short)8372;
int zero = 0;
long long int var_19 = -6163671208376858394LL;
long long int var_20 = -1808351471920352798LL;
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
