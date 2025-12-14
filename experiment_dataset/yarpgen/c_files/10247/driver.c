#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
unsigned int var_9 = 3993268055U;
signed char var_12 = (signed char)59;
signed char var_13 = (signed char)103;
unsigned long long int var_14 = 14949272311998880042ULL;
long long int var_16 = 1739390081407771628LL;
int zero = 0;
unsigned int var_17 = 4102254878U;
unsigned short var_18 = (unsigned short)29575;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
