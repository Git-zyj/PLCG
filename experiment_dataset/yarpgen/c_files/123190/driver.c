#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-18714;
_Bool var_9 = (_Bool)0;
long long int var_12 = 4706156641822795887LL;
unsigned long long int var_14 = 3622906375355728489ULL;
int zero = 0;
unsigned long long int var_15 = 7250456115785574904ULL;
unsigned short var_16 = (unsigned short)5866;
void init() {
}

void checksum() {
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
