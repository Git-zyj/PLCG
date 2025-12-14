#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-122;
short var_3 = (short)21564;
unsigned short var_5 = (unsigned short)29109;
unsigned char var_6 = (unsigned char)133;
unsigned long long int var_10 = 3154816082234273024ULL;
int var_13 = 1389870889;
short var_17 = (short)-10866;
signed char var_18 = (signed char)112;
int zero = 0;
int var_20 = 1776678622;
signed char var_21 = (signed char)-38;
unsigned long long int var_22 = 11317106102099157443ULL;
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
