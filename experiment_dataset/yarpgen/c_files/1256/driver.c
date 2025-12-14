#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_10 = (signed char)46;
_Bool var_13 = (_Bool)0;
int zero = 0;
int var_20 = -440172695;
unsigned short var_21 = (unsigned short)19351;
_Bool var_22 = (_Bool)1;
long long int var_23 = 7590576824586527208LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
