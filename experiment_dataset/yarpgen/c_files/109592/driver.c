#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_6 = -1327224250;
short var_9 = (short)-30182;
int var_10 = 1529303944;
int zero = 0;
unsigned char var_15 = (unsigned char)249;
short var_16 = (short)-30221;
unsigned char var_17 = (unsigned char)210;
short var_18 = (short)20140;
void init() {
}

void checksum() {
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
