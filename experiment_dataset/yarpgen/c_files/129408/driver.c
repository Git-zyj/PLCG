#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
short var_6 = (short)9222;
long long int var_8 = -6346394837507364656LL;
_Bool var_9 = (_Bool)1;
short var_10 = (short)-4159;
_Bool var_12 = (_Bool)1;
signed char var_13 = (signed char)41;
_Bool var_14 = (_Bool)1;
int zero = 0;
_Bool var_16 = (_Bool)1;
unsigned short var_17 = (unsigned short)36839;
unsigned long long int var_18 = 8634627861362786726ULL;
int var_19 = 557376071;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
