#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3967597014689637541LL;
unsigned int var_2 = 2042411180U;
signed char var_3 = (signed char)125;
short var_8 = (short)-10534;
_Bool var_9 = (_Bool)0;
unsigned int var_10 = 1560061618U;
_Bool var_14 = (_Bool)1;
int var_15 = -686326814;
short var_17 = (short)-8453;
int zero = 0;
int var_18 = 556453809;
int var_19 = -613064877;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
