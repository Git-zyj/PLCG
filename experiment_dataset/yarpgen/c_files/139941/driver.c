#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1893558082U;
unsigned long long int var_1 = 17025427542798862425ULL;
unsigned long long int var_2 = 5824655769007559171ULL;
short var_4 = (short)-1549;
_Bool var_6 = (_Bool)1;
short var_8 = (short)-3473;
short var_13 = (short)4829;
short var_14 = (short)-9866;
short var_15 = (short)1943;
signed char var_16 = (signed char)9;
int zero = 0;
unsigned long long int var_20 = 4194852532365468651ULL;
unsigned int var_21 = 1269574233U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
