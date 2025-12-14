#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1284917399;
_Bool var_4 = (_Bool)1;
unsigned int var_13 = 2556590915U;
signed char var_14 = (signed char)-97;
int zero = 0;
long long int var_16 = 3071578386109346553LL;
short var_17 = (short)12850;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
