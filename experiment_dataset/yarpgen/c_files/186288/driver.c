#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)48030;
unsigned short var_4 = (unsigned short)26031;
int var_5 = 417664627;
short var_8 = (short)30965;
unsigned int var_9 = 2673609958U;
unsigned int var_15 = 1901930466U;
int zero = 0;
_Bool var_17 = (_Bool)1;
unsigned char var_18 = (unsigned char)240;
unsigned long long int var_19 = 15792197624162021882ULL;
unsigned short var_20 = (unsigned short)25942;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
