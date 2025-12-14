#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)10689;
_Bool var_2 = (_Bool)0;
short var_5 = (short)-17081;
unsigned short var_8 = (unsigned short)22432;
unsigned long long int var_10 = 2180304750808392743ULL;
unsigned short var_13 = (unsigned short)39923;
int zero = 0;
_Bool var_15 = (_Bool)1;
unsigned int var_16 = 3010522948U;
short var_17 = (short)12382;
void init() {
}

void checksum() {
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
