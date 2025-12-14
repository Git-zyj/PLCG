#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned short var_3 = (unsigned short)26639;
int var_4 = -540575327;
unsigned long long int var_6 = 18388271645324411742ULL;
unsigned int var_8 = 2292806869U;
long long int var_9 = -909293408599421138LL;
long long int var_11 = -223403768078752211LL;
unsigned short var_14 = (unsigned short)36624;
int zero = 0;
unsigned short var_15 = (unsigned short)2193;
signed char var_16 = (signed char)25;
unsigned short var_17 = (unsigned short)30329;
short var_18 = (short)-31668;
unsigned char var_19 = (unsigned char)88;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
