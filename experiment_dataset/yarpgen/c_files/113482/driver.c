#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -6331957485823720918LL;
unsigned short var_5 = (unsigned short)54171;
short var_6 = (short)1001;
unsigned long long int var_7 = 16724168072793181252ULL;
int var_8 = 2019143894;
int var_10 = -1319918476;
int zero = 0;
unsigned char var_11 = (unsigned char)215;
short var_12 = (short)-14728;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
