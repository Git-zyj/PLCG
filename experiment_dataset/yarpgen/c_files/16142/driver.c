#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_2 = 3975177400U;
long long int var_3 = -1814448645972619712LL;
short var_6 = (short)-14673;
int var_8 = -1898862673;
unsigned int var_9 = 2916309476U;
_Bool var_10 = (_Bool)0;
int var_12 = -1169835846;
int zero = 0;
short var_13 = (short)-21813;
short var_14 = (short)-11570;
int var_15 = -747721249;
long long int var_16 = -3707391875033439757LL;
unsigned char var_17 = (unsigned char)30;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
