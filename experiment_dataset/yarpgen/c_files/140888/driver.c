#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned long long int var_2 = 4973998653719463163ULL;
unsigned int var_5 = 2186520627U;
unsigned int var_8 = 606629491U;
_Bool var_9 = (_Bool)1;
unsigned long long int var_10 = 6414076977851798153ULL;
_Bool var_12 = (_Bool)0;
signed char var_13 = (signed char)100;
int zero = 0;
long long int var_15 = -6733304296247263168LL;
long long int var_16 = -5405386457235851138LL;
unsigned int var_17 = 227486930U;
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
