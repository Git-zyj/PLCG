#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 2984210300393523354LL;
signed char var_6 = (signed char)-84;
unsigned long long int var_8 = 12594735881274283905ULL;
int zero = 0;
unsigned short var_10 = (unsigned short)47494;
_Bool var_11 = (_Bool)0;
short var_12 = (short)17633;
unsigned short var_13 = (unsigned short)9387;
unsigned int var_14 = 1783929588U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
