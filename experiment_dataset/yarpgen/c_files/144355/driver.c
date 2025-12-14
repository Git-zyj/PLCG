#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 9208357405698994686ULL;
signed char var_4 = (signed char)-124;
int var_5 = 227117640;
short var_7 = (short)-30361;
long long int var_10 = 1793650660021223630LL;
unsigned char var_11 = (unsigned char)190;
unsigned short var_14 = (unsigned short)6885;
int zero = 0;
_Bool var_16 = (_Bool)1;
long long int var_17 = -7182601737009816195LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
