#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 1337910106319354866LL;
unsigned char var_6 = (unsigned char)182;
long long int var_10 = 9107837615433038059LL;
short var_11 = (short)-21978;
long long int var_13 = 3371706824283384154LL;
int zero = 0;
unsigned short var_17 = (unsigned short)32861;
unsigned char var_18 = (unsigned char)96;
void init() {
}

void checksum() {
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
