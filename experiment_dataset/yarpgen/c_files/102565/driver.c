#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)44473;
unsigned int var_4 = 1336819801U;
_Bool var_10 = (_Bool)1;
int var_11 = -1826930457;
short var_15 = (short)-1605;
int zero = 0;
_Bool var_18 = (_Bool)0;
long long int var_19 = 2508580211965854427LL;
unsigned int var_20 = 481822189U;
void init() {
}

void checksum() {
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
