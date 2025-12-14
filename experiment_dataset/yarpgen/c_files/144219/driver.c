#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-9963;
_Bool var_4 = (_Bool)0;
long long int var_5 = 2017458520157988502LL;
unsigned short var_12 = (unsigned short)30299;
long long int var_13 = 4467914718656371330LL;
short var_14 = (short)3390;
int zero = 0;
short var_15 = (short)-19196;
unsigned int var_16 = 3192460042U;
unsigned int var_17 = 1335148066U;
int var_18 = -1022244121;
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
