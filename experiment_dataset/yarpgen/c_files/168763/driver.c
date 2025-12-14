#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_7 = (_Bool)0;
unsigned int var_12 = 2237756371U;
long long int var_13 = -5231513610085589648LL;
unsigned short var_14 = (unsigned short)31712;
unsigned short var_15 = (unsigned short)51790;
int zero = 0;
short var_19 = (short)12515;
unsigned short var_20 = (unsigned short)39650;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
