#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
short var_3 = (short)28271;
unsigned int var_4 = 461568449U;
signed char var_5 = (signed char)71;
unsigned long long int var_11 = 12981128962432062212ULL;
long long int var_12 = -3793927892376920341LL;
int zero = 0;
signed char var_13 = (signed char)48;
short var_14 = (short)12135;
unsigned long long int var_15 = 5020628503357501331ULL;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
