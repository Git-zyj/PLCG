#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -8637020138778584108LL;
unsigned short var_2 = (unsigned short)64998;
unsigned int var_7 = 2166566505U;
unsigned long long int var_10 = 11388771632269952549ULL;
unsigned short var_11 = (unsigned short)20468;
_Bool var_13 = (_Bool)1;
short var_18 = (short)-8772;
int zero = 0;
unsigned int var_19 = 1530383808U;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
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
