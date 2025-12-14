#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned short var_4 = (unsigned short)64262;
long long int var_12 = -3682464022648564053LL;
unsigned short var_13 = (unsigned short)24161;
long long int var_15 = 3416863180159554838LL;
int var_16 = -1871823256;
int zero = 0;
long long int var_17 = -5937725497391544312LL;
signed char var_18 = (signed char)86;
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
