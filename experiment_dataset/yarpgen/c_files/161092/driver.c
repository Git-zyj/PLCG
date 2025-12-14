#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)-27503;
int var_6 = 706754491;
unsigned int var_10 = 3840722783U;
signed char var_11 = (signed char)90;
_Bool var_14 = (_Bool)0;
unsigned short var_15 = (unsigned short)39163;
int zero = 0;
short var_16 = (short)-12664;
long long int var_17 = 2579379807884252288LL;
void init() {
}

void checksum() {
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
