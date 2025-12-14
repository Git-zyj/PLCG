#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 3741241522U;
unsigned char var_5 = (unsigned char)253;
int var_7 = -1822777659;
_Bool var_8 = (_Bool)0;
unsigned int var_9 = 2172094757U;
short var_11 = (short)-709;
int zero = 0;
unsigned char var_14 = (unsigned char)33;
long long int var_15 = -7363275881220044990LL;
signed char var_16 = (signed char)-15;
int var_17 = 1909954396;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
