#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -866791477734484943LL;
long long int var_10 = 8186087272575217864LL;
long long int var_14 = -3222761272626327248LL;
int zero = 0;
signed char var_15 = (signed char)96;
long long int var_16 = -6358994962151742717LL;
unsigned char var_17 = (unsigned char)192;
unsigned char var_18 = (unsigned char)227;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
