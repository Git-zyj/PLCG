#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1792417225;
short var_3 = (short)-14826;
unsigned long long int var_4 = 10927193301602150897ULL;
unsigned short var_5 = (unsigned short)30256;
short var_8 = (short)13270;
long long int var_9 = 2328247077855205916LL;
_Bool var_12 = (_Bool)1;
int zero = 0;
int var_18 = 968882303;
short var_19 = (short)4138;
int var_20 = -1759239014;
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
