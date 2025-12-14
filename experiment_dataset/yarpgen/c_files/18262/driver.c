#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)28883;
unsigned int var_2 = 688579475U;
short var_4 = (short)24361;
unsigned short var_6 = (unsigned short)63557;
unsigned short var_7 = (unsigned short)32940;
unsigned short var_8 = (unsigned short)54546;
_Bool var_10 = (_Bool)1;
unsigned short var_11 = (unsigned short)20105;
unsigned short var_12 = (unsigned short)4218;
unsigned long long int var_13 = 15493916559369054126ULL;
long long int var_14 = 368777325742038296LL;
int zero = 0;
long long int var_15 = 4830136074984553687LL;
unsigned int var_16 = 661283046U;
unsigned int var_17 = 3178846713U;
unsigned int var_18 = 1836602284U;
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
