#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 2258637558237952008LL;
long long int var_4 = -132514051141680645LL;
int var_15 = -922130942;
int zero = 0;
_Bool var_17 = (_Bool)1;
short var_18 = (short)29294;
long long int var_19 = 3742877633679946590LL;
signed char var_20 = (signed char)-6;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
