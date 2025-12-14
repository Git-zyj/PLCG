#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 247623247;
_Bool var_9 = (_Bool)1;
_Bool var_10 = (_Bool)0;
signed char var_13 = (signed char)99;
unsigned int var_17 = 1759866712U;
int zero = 0;
int var_18 = 1852397969;
int var_19 = 1034740330;
unsigned short var_20 = (unsigned short)32455;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
