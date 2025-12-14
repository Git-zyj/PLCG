#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 7024579364130711570ULL;
short var_2 = (short)17284;
long long int var_3 = 2389671652267429844LL;
_Bool var_4 = (_Bool)0;
unsigned long long int var_5 = 15289523196011686698ULL;
_Bool var_8 = (_Bool)1;
short var_9 = (short)15302;
int var_10 = -1641259884;
unsigned long long int var_11 = 13383680218364923343ULL;
unsigned char var_12 = (unsigned char)111;
int zero = 0;
int var_13 = 1106160817;
_Bool var_14 = (_Bool)1;
int var_15 = -1405903596;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
