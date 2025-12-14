#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)12;
short var_3 = (short)25387;
signed char var_7 = (signed char)6;
unsigned int var_8 = 4166576356U;
long long int var_11 = -8931348447467589238LL;
_Bool var_13 = (_Bool)1;
int zero = 0;
int var_15 = 740632959;
unsigned short var_16 = (unsigned short)2919;
long long int var_17 = -2340770517308929781LL;
void init() {
}

void checksum() {
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
