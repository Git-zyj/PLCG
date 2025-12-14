#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = -1532113511;
short var_8 = (short)-30515;
unsigned char var_11 = (unsigned char)20;
long long int var_15 = -4762199880781816044LL;
unsigned short var_16 = (unsigned short)54442;
int zero = 0;
_Bool var_17 = (_Bool)1;
short var_18 = (short)-24558;
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
