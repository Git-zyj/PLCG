#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3969036832U;
_Bool var_5 = (_Bool)0;
int var_11 = 1227154517;
unsigned int var_14 = 2311086595U;
int zero = 0;
unsigned int var_15 = 1597011394U;
unsigned int var_16 = 1780466553U;
short var_17 = (short)-1301;
short var_18 = (short)30983;
unsigned long long int var_19 = 6264163147227913718ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
