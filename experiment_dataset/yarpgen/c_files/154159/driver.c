#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 11011946617872166509ULL;
long long int var_10 = 2166983726447651983LL;
unsigned char var_11 = (unsigned char)48;
unsigned short var_14 = (unsigned short)3707;
int zero = 0;
unsigned long long int var_16 = 3943635315362608685ULL;
long long int var_17 = 7935083965543330812LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
