#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -427359242295944164LL;
unsigned char var_5 = (unsigned char)97;
signed char var_10 = (signed char)39;
int var_11 = -260450370;
long long int var_13 = 654552360721611719LL;
int zero = 0;
int var_14 = 237138956;
unsigned short var_15 = (unsigned short)39805;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
