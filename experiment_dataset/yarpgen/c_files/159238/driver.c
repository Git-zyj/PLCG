#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_1 = (_Bool)0;
unsigned int var_4 = 1892882794U;
unsigned short var_7 = (unsigned short)23490;
unsigned int var_9 = 729111564U;
int zero = 0;
unsigned short var_11 = (unsigned short)574;
short var_12 = (short)-24701;
long long int var_13 = -5523767412470486073LL;
unsigned long long int var_14 = 12137862143140712558ULL;
unsigned short var_15 = (unsigned short)13074;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
