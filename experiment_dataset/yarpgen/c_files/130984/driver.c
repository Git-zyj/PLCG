#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)27921;
unsigned long long int var_7 = 1801742056982997919ULL;
unsigned int var_8 = 1982215219U;
int var_9 = -837805419;
_Bool var_13 = (_Bool)1;
int zero = 0;
short var_14 = (short)-19503;
int var_15 = -1708700133;
unsigned char var_16 = (unsigned char)14;
int var_17 = 1168540379;
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
