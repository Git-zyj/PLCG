#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)32056;
unsigned char var_3 = (unsigned char)100;
unsigned short var_8 = (unsigned short)41121;
unsigned int var_11 = 2548248339U;
unsigned char var_12 = (unsigned char)50;
_Bool var_13 = (_Bool)0;
unsigned char var_14 = (unsigned char)242;
int zero = 0;
signed char var_15 = (signed char)(-127 - 1);
short var_16 = (short)-30069;
long long int var_17 = -4900742928187713638LL;
unsigned long long int var_18 = 13048292318226105335ULL;
unsigned short var_19 = (unsigned short)45556;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
