#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)82;
long long int var_2 = -3412829201394539097LL;
unsigned long long int var_4 = 15468710299572491255ULL;
unsigned short var_7 = (unsigned short)39080;
unsigned char var_9 = (unsigned char)183;
short var_10 = (short)29451;
unsigned char var_14 = (unsigned char)71;
int zero = 0;
unsigned long long int var_15 = 14171839966469922129ULL;
long long int var_16 = -849935180521418816LL;
unsigned long long int var_17 = 5218484678350962203ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
