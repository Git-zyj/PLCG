#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5035919649848614075LL;
long long int var_1 = -7388548592327539994LL;
_Bool var_2 = (_Bool)1;
int var_3 = 1066951526;
int var_8 = -1573522769;
unsigned long long int var_10 = 14482199921647735421ULL;
unsigned long long int var_12 = 11315691083613430127ULL;
int zero = 0;
int var_14 = 930370755;
long long int var_15 = -2032832409518086592LL;
int var_16 = 1232783541;
long long int var_17 = -2763160548060038634LL;
void init() {
}

void checksum() {
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
