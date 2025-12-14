#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 12209067764773625767ULL;
unsigned short var_2 = (unsigned short)62172;
signed char var_4 = (signed char)96;
short var_5 = (short)-29257;
_Bool var_8 = (_Bool)1;
int var_9 = 1563569954;
unsigned int var_12 = 2631330915U;
unsigned int var_13 = 821800639U;
int zero = 0;
signed char var_15 = (signed char)-53;
short var_16 = (short)-28970;
long long int var_17 = -1678899452272480732LL;
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
