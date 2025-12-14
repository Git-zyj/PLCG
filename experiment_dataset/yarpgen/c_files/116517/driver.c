#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)51719;
int var_2 = 1591043615;
signed char var_5 = (signed char)17;
unsigned int var_6 = 1253538126U;
_Bool var_8 = (_Bool)1;
short var_10 = (short)1261;
unsigned int var_12 = 1032365842U;
int var_15 = 698582409;
_Bool var_16 = (_Bool)0;
int zero = 0;
unsigned int var_17 = 2741196346U;
long long int var_18 = 3649054995639683425LL;
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
