#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3914291086U;
unsigned int var_3 = 2312133801U;
short var_5 = (short)-14066;
unsigned short var_6 = (unsigned short)32048;
signed char var_7 = (signed char)79;
unsigned int var_9 = 58040517U;
int zero = 0;
_Bool var_12 = (_Bool)1;
_Bool var_13 = (_Bool)0;
unsigned short var_14 = (unsigned short)59324;
unsigned int var_15 = 2327278510U;
int var_16 = 435843841;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
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
