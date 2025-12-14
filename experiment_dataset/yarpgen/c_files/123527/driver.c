#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)9;
int var_3 = -1123806515;
signed char var_5 = (signed char)-62;
unsigned char var_6 = (unsigned char)15;
short var_8 = (short)-9229;
signed char var_10 = (signed char)63;
int var_11 = 1914619686;
long long int var_14 = 6536247177101465836LL;
unsigned char var_15 = (unsigned char)166;
unsigned char var_17 = (unsigned char)187;
short var_18 = (short)27366;
int zero = 0;
short var_20 = (short)12435;
short var_21 = (short)20698;
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
