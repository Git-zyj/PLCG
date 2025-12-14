#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7161629584483457953LL;
unsigned short var_1 = (unsigned short)2738;
unsigned int var_2 = 2452741227U;
short var_3 = (short)-28509;
_Bool var_4 = (_Bool)1;
unsigned short var_6 = (unsigned short)56478;
unsigned int var_7 = 3107648413U;
unsigned long long int var_8 = 11277542921851632556ULL;
short var_9 = (short)5011;
int zero = 0;
int var_10 = -132480328;
long long int var_11 = 506481867731504636LL;
long long int var_12 = -2009654326027351310LL;
unsigned short var_13 = (unsigned short)41287;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
