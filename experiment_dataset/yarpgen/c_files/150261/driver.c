#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)1;
long long int var_6 = -3337767627899838773LL;
unsigned short var_12 = (unsigned short)35120;
int zero = 0;
unsigned long long int var_15 = 11275881183495124643ULL;
short var_16 = (short)-1564;
unsigned int var_17 = 2992914528U;
signed char var_18 = (signed char)61;
unsigned long long int var_19 = 4853490086929239191ULL;
unsigned long long int var_20 = 7201460978964985996ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
