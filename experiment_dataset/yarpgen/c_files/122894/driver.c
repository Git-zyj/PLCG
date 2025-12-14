#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)178;
unsigned char var_8 = (unsigned char)52;
unsigned long long int var_11 = 15030474821564459330ULL;
_Bool var_14 = (_Bool)1;
short var_15 = (short)13515;
unsigned long long int var_16 = 17583946353373561406ULL;
unsigned char var_18 = (unsigned char)174;
int zero = 0;
unsigned char var_19 = (unsigned char)214;
unsigned long long int var_20 = 7399970823838154772ULL;
void init() {
}

void checksum() {
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
