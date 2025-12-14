#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)-9944;
unsigned short var_7 = (unsigned short)7963;
unsigned long long int var_9 = 14722260681592177776ULL;
unsigned short var_10 = (unsigned short)2621;
unsigned short var_13 = (unsigned short)12874;
int zero = 0;
unsigned long long int var_16 = 14413290022379276658ULL;
int var_17 = 2070905708;
long long int var_18 = -1383993408104662106LL;
short var_19 = (short)12248;
short var_20 = (short)2028;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
