#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)35619;
short var_4 = (short)21870;
_Bool var_5 = (_Bool)0;
unsigned int var_7 = 2576952775U;
int var_9 = -1729239808;
int var_10 = 969155955;
int var_11 = 303057369;
int zero = 0;
unsigned long long int var_12 = 15776462390056282600ULL;
int var_13 = 1172877525;
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
