#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)97;
long long int var_4 = -8744314271922083803LL;
int var_10 = 1577522943;
unsigned long long int var_11 = 13202206131877557560ULL;
int var_12 = 1430717630;
int var_13 = 1790066384;
unsigned long long int var_15 = 7906912736696613541ULL;
int zero = 0;
unsigned short var_20 = (unsigned short)40617;
unsigned char var_21 = (unsigned char)3;
unsigned char var_22 = (unsigned char)105;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
