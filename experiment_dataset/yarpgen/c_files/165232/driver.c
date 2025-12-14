#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_6 = (short)27184;
long long int var_8 = 2648498450716757832LL;
unsigned int var_11 = 3150734712U;
short var_12 = (short)25784;
long long int var_13 = 1698872106112593146LL;
int zero = 0;
unsigned int var_14 = 2244335831U;
unsigned int var_15 = 2630018114U;
signed char var_16 = (signed char)62;
signed char var_17 = (signed char)-58;
_Bool var_18 = (_Bool)0;
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
