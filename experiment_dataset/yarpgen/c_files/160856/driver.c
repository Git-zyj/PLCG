#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_1 = 8105062189839880826LL;
long long int var_2 = -5515338086310523642LL;
long long int var_7 = 2892824575014305049LL;
signed char var_10 = (signed char)10;
short var_11 = (short)-17157;
unsigned long long int var_12 = 9712396458419756795ULL;
long long int var_14 = -5812590263346078073LL;
int zero = 0;
short var_19 = (short)27256;
unsigned long long int var_20 = 6446440084411149531ULL;
int var_21 = -684176884;
short var_22 = (short)9708;
unsigned long long int var_23 = 12107409376920667741ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
