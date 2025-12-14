#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-26312;
long long int var_5 = -8327114058165485563LL;
short var_6 = (short)30291;
unsigned long long int var_7 = 14280949653171768687ULL;
unsigned long long int var_9 = 13374022961220325927ULL;
unsigned short var_10 = (unsigned short)2373;
unsigned char var_13 = (unsigned char)221;
int zero = 0;
short var_14 = (short)14191;
long long int var_15 = 1509999550795357243LL;
unsigned char var_16 = (unsigned char)208;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
