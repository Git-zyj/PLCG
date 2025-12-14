#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
short var_6 = (short)-3719;
short var_7 = (short)3078;
unsigned char var_8 = (unsigned char)230;
short var_9 = (short)14442;
short var_11 = (short)-7783;
int zero = 0;
unsigned long long int var_13 = 6189713884160197559ULL;
unsigned short var_14 = (unsigned short)16519;
unsigned short var_15 = (unsigned short)63604;
long long int var_16 = 7197503444518595513LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
