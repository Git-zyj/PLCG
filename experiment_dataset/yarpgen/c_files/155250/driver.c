#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)200;
unsigned int var_2 = 1307359390U;
short var_3 = (short)27260;
int zero = 0;
short var_10 = (short)28407;
unsigned long long int var_11 = 12653858040861992854ULL;
unsigned short var_12 = (unsigned short)21022;
unsigned long long int var_13 = 13421203794301425772ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
