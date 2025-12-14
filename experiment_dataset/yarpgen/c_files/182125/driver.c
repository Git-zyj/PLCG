#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned long long int var_2 = 6660732128095939338ULL;
short var_5 = (short)-2677;
unsigned short var_7 = (unsigned short)3519;
unsigned short var_9 = (unsigned short)27809;
short var_15 = (short)31332;
_Bool var_16 = (_Bool)0;
int zero = 0;
unsigned char var_17 = (unsigned char)183;
long long int var_18 = -5007238279590002021LL;
void init() {
}

void checksum() {
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
