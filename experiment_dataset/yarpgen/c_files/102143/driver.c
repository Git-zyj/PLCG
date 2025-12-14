#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_8 = (unsigned short)35788;
unsigned int var_11 = 2605849436U;
int zero = 0;
unsigned long long int var_15 = 7776293582533641134ULL;
_Bool var_16 = (_Bool)1;
unsigned short var_17 = (unsigned short)48756;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
