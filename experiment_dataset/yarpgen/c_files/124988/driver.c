#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2046692839U;
unsigned short var_2 = (unsigned short)45854;
int var_4 = 1785777323;
unsigned short var_5 = (unsigned short)34906;
unsigned short var_6 = (unsigned short)48903;
int var_12 = -510473540;
int var_14 = -1407614562;
signed char var_15 = (signed char)-92;
int zero = 0;
signed char var_16 = (signed char)118;
long long int var_17 = -8991300993589220217LL;
unsigned int var_18 = 4222116501U;
short var_19 = (short)4984;
unsigned int var_20 = 2249582288U;
void init() {
}

void checksum() {
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
