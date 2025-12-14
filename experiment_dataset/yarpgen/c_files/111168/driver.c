#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2404910623966269176LL;
long long int var_1 = -8152517437035748283LL;
_Bool var_2 = (_Bool)0;
short var_4 = (short)30479;
unsigned long long int var_5 = 13363533522656930230ULL;
_Bool var_6 = (_Bool)1;
short var_9 = (short)21344;
_Bool var_10 = (_Bool)1;
int zero = 0;
short var_12 = (short)-18000;
unsigned int var_13 = 797384784U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
