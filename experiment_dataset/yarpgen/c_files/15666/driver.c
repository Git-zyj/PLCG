#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-2720;
unsigned short var_5 = (unsigned short)30624;
_Bool var_11 = (_Bool)0;
_Bool var_12 = (_Bool)1;
int var_13 = -1703627416;
int zero = 0;
short var_14 = (short)-15239;
unsigned long long int var_15 = 9328760085512551794ULL;
unsigned int var_16 = 305108964U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
