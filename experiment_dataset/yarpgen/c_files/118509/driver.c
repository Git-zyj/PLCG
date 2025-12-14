#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7102673590208980358ULL;
int var_2 = 682907073;
signed char var_4 = (signed char)44;
unsigned long long int var_5 = 4080196288671130707ULL;
short var_8 = (short)26552;
short var_9 = (short)-18899;
_Bool var_10 = (_Bool)1;
_Bool var_12 = (_Bool)0;
unsigned char var_13 = (unsigned char)188;
unsigned int var_14 = 160608068U;
int zero = 0;
short var_15 = (short)-14402;
unsigned int var_16 = 4114773705U;
_Bool var_17 = (_Bool)1;
unsigned short var_18 = (unsigned short)921;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
