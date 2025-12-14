#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_2 = 1393145448;
unsigned long long int var_3 = 7309286615159111153ULL;
unsigned int var_4 = 1302039720U;
signed char var_11 = (signed char)-24;
unsigned short var_13 = (unsigned short)43683;
int zero = 0;
unsigned short var_14 = (unsigned short)26642;
short var_15 = (short)8610;
int var_16 = -273180461;
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
