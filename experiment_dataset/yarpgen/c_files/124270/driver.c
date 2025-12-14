#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
short var_9 = (short)129;
long long int var_11 = -4510482653455357259LL;
int var_12 = -225318189;
int var_18 = 1906029747;
int zero = 0;
int var_19 = -1387343063;
_Bool var_20 = (_Bool)0;
_Bool var_21 = (_Bool)1;
signed char var_22 = (signed char)57;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
