#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1466566381;
unsigned short var_7 = (unsigned short)27594;
short var_8 = (short)-23475;
long long int var_9 = 3259202605175349296LL;
int var_17 = 417765615;
int zero = 0;
_Bool var_19 = (_Bool)1;
unsigned short var_20 = (unsigned short)30098;
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
