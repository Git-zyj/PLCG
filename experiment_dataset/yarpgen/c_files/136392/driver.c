#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)28118;
unsigned long long int var_5 = 9713746768565423532ULL;
short var_6 = (short)23760;
signed char var_8 = (signed char)22;
short var_13 = (short)25088;
int zero = 0;
unsigned short var_16 = (unsigned short)23697;
_Bool var_17 = (_Bool)1;
short var_18 = (short)9830;
void init() {
}

void checksum() {
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
