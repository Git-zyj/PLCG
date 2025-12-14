#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_7 = (_Bool)1;
long long int var_10 = -3674265194537366426LL;
unsigned int var_12 = 2413776777U;
signed char var_13 = (signed char)-110;
int zero = 0;
short var_14 = (short)-24697;
unsigned long long int var_15 = 4199756767307024590ULL;
_Bool var_16 = (_Bool)1;
unsigned short var_17 = (unsigned short)18234;
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
