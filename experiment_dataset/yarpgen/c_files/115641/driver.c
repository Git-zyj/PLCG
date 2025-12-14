#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)96;
int var_5 = -2096269007;
signed char var_7 = (signed char)39;
_Bool var_8 = (_Bool)1;
unsigned short var_9 = (unsigned short)419;
unsigned char var_11 = (unsigned char)220;
int zero = 0;
short var_14 = (short)2813;
short var_15 = (short)7529;
int var_16 = -2050383681;
signed char var_17 = (signed char)-45;
unsigned long long int var_18 = 2510345438912661168ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
