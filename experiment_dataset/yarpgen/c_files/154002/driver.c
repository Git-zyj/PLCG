#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5939576137637726324LL;
unsigned short var_1 = (unsigned short)51075;
_Bool var_2 = (_Bool)0;
unsigned long long int var_4 = 10299505634300382936ULL;
_Bool var_6 = (_Bool)0;
_Bool var_10 = (_Bool)0;
unsigned long long int var_11 = 81705310458385409ULL;
unsigned int var_13 = 2225439490U;
short var_16 = (short)11457;
int zero = 0;
unsigned char var_17 = (unsigned char)183;
unsigned char var_18 = (unsigned char)56;
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
