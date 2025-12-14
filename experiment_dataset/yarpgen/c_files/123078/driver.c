#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)0;
unsigned long long int var_7 = 3583915445016109145ULL;
_Bool var_8 = (_Bool)1;
_Bool var_9 = (_Bool)0;
unsigned short var_10 = (unsigned short)29538;
int zero = 0;
unsigned short var_14 = (unsigned short)17665;
unsigned short var_15 = (unsigned short)39333;
unsigned short var_16 = (unsigned short)56562;
unsigned short var_17 = (unsigned short)54840;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
