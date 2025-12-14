#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 401400203U;
signed char var_3 = (signed char)80;
short var_4 = (short)18773;
short var_5 = (short)-31424;
short var_6 = (short)23578;
_Bool var_7 = (_Bool)1;
long long int var_8 = 6622664646684036681LL;
int var_11 = -1508212612;
int var_12 = 84513297;
short var_13 = (short)29115;
short var_14 = (short)-24066;
int zero = 0;
unsigned int var_15 = 1124762153U;
short var_16 = (short)8629;
void init() {
}

void checksum() {
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
