#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned short var_3 = (unsigned short)23435;
short var_5 = (short)12752;
unsigned short var_7 = (unsigned short)36954;
unsigned short var_8 = (unsigned short)52400;
long long int var_13 = -8738515764522798363LL;
int zero = 0;
int var_14 = -788982510;
unsigned int var_15 = 1021566778U;
unsigned int var_16 = 488010750U;
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
