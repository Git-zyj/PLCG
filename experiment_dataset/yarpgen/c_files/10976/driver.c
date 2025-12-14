#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1340317002579296746ULL;
unsigned short var_2 = (unsigned short)64603;
short var_5 = (short)13244;
unsigned short var_6 = (unsigned short)55643;
unsigned short var_7 = (unsigned short)3691;
unsigned char var_8 = (unsigned char)108;
unsigned long long int var_9 = 1684253402710610377ULL;
unsigned char var_11 = (unsigned char)128;
unsigned char var_13 = (unsigned char)8;
unsigned char var_17 = (unsigned char)200;
int zero = 0;
unsigned char var_19 = (unsigned char)224;
long long int var_20 = -4151520099744997497LL;
unsigned char var_21 = (unsigned char)241;
unsigned int var_22 = 2842816384U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
