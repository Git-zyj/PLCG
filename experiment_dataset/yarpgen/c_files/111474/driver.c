#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)2014;
unsigned long long int var_14 = 5690919543164327723ULL;
int zero = 0;
unsigned long long int var_15 = 3969136443153273949ULL;
short var_16 = (short)-22059;
unsigned long long int var_17 = 6005505265210671060ULL;
long long int var_18 = -827912696335983103LL;
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
