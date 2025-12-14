#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)23132;
unsigned int var_5 = 2526734029U;
long long int var_6 = -4357760558296084368LL;
short var_7 = (short)2714;
unsigned int var_10 = 467386602U;
long long int var_11 = 4832695345697550546LL;
int zero = 0;
unsigned long long int var_12 = 3022719470707490802ULL;
_Bool var_13 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
