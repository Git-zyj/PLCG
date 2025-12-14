#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_10 = 757443689;
unsigned short var_12 = (unsigned short)20586;
unsigned int var_15 = 1869290074U;
signed char var_16 = (signed char)92;
int zero = 0;
_Bool var_17 = (_Bool)0;
unsigned long long int var_18 = 16411135166279919769ULL;
unsigned short var_19 = (unsigned short)26302;
void init() {
}

void checksum() {
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
