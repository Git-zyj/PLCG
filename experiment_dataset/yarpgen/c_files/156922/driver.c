#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)83;
long long int var_2 = 3604519061303698270LL;
unsigned short var_3 = (unsigned short)19133;
unsigned short var_4 = (unsigned short)64747;
unsigned int var_5 = 1864017057U;
int var_8 = 1309883336;
unsigned char var_10 = (unsigned char)39;
int var_11 = 747299925;
int zero = 0;
int var_13 = 854248861;
unsigned short var_14 = (unsigned short)17040;
unsigned short var_15 = (unsigned short)55960;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
