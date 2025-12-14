#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-9485;
signed char var_5 = (signed char)4;
_Bool var_8 = (_Bool)0;
long long int var_9 = -7752541587477988624LL;
int var_10 = -408886659;
_Bool var_11 = (_Bool)0;
_Bool var_12 = (_Bool)1;
int var_17 = 1047672327;
int zero = 0;
_Bool var_20 = (_Bool)0;
unsigned short var_21 = (unsigned short)48636;
int var_22 = 230122955;
int var_23 = 325323962;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
