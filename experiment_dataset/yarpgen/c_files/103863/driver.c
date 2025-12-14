#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -977719195;
unsigned short var_2 = (unsigned short)43921;
unsigned long long int var_9 = 18021528467150632813ULL;
unsigned char var_10 = (unsigned char)27;
long long int var_17 = 3226511479327344873LL;
int zero = 0;
int var_20 = 1516932378;
int var_21 = -949187743;
void init() {
}

void checksum() {
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
