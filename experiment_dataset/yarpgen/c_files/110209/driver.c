#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-3243;
unsigned short var_2 = (unsigned short)54013;
unsigned int var_3 = 3631860215U;
int var_4 = 1269382854;
short var_5 = (short)-8675;
unsigned long long int var_6 = 5679978110835280741ULL;
short var_10 = (short)29294;
unsigned short var_11 = (unsigned short)43827;
unsigned long long int var_12 = 12339293427114061699ULL;
unsigned char var_14 = (unsigned char)57;
int zero = 0;
unsigned long long int var_16 = 13163442715596021508ULL;
long long int var_17 = -8868917914777326724LL;
short var_18 = (short)-28600;
short var_19 = (short)15229;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
