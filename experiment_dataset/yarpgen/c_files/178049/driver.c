#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 741725763U;
short var_6 = (short)-30902;
unsigned short var_7 = (unsigned short)37403;
short var_8 = (short)-14727;
short var_11 = (short)-6185;
int zero = 0;
signed char var_14 = (signed char)-113;
unsigned char var_15 = (unsigned char)68;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
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
