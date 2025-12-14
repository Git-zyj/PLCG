#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-14240;
short var_5 = (short)-22437;
short var_9 = (short)-12829;
long long int var_13 = 1635346741732360544LL;
int zero = 0;
unsigned char var_14 = (unsigned char)237;
_Bool var_15 = (_Bool)1;
unsigned short var_16 = (unsigned short)51815;
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
