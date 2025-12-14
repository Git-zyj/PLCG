#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3402972483U;
long long int var_4 = -7965289424998273334LL;
long long int var_9 = -7814289927586719860LL;
unsigned short var_10 = (unsigned short)27241;
_Bool var_11 = (_Bool)0;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned short var_16 = (unsigned short)2414;
long long int var_17 = 4256751405950153140LL;
short var_18 = (short)-25536;
unsigned int var_19 = 2102947257U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
