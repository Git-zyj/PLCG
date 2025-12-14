#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
int var_7 = 1960721821;
long long int var_11 = 5523671838780295248LL;
int var_15 = 1434104811;
unsigned char var_16 = (unsigned char)197;
int zero = 0;
unsigned int var_17 = 3995696834U;
short var_18 = (short)-8650;
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
