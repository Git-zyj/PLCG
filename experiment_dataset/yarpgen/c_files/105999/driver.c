#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)0;
unsigned int var_6 = 1323441345U;
short var_8 = (short)2302;
signed char var_9 = (signed char)-11;
int zero = 0;
unsigned int var_14 = 1813660516U;
unsigned long long int var_15 = 1032585848398534897ULL;
unsigned long long int var_16 = 17930903616084944202ULL;
short var_17 = (short)7021;
long long int var_18 = -721545679321699260LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
