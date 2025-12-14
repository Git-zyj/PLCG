#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-17789;
signed char var_2 = (signed char)37;
unsigned int var_6 = 3512804892U;
int var_7 = 564891489;
long long int var_9 = -1658347784965767189LL;
unsigned long long int var_11 = 14652515556003091455ULL;
long long int var_13 = -3287462692159827593LL;
int zero = 0;
int var_15 = 785034970;
short var_16 = (short)-547;
unsigned short var_17 = (unsigned short)52153;
unsigned int var_18 = 3844038184U;
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
