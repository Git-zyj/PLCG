#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1565907976U;
_Bool var_4 = (_Bool)1;
short var_6 = (short)9446;
unsigned short var_9 = (unsigned short)63136;
unsigned long long int var_10 = 11251990905639258997ULL;
short var_13 = (short)-11359;
int zero = 0;
unsigned short var_14 = (unsigned short)64158;
long long int var_15 = -2447016956214252841LL;
unsigned char var_16 = (unsigned char)134;
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
