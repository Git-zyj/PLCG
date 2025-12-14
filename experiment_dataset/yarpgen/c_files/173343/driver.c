#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
short var_6 = (short)30601;
_Bool var_8 = (_Bool)1;
unsigned int var_11 = 3124765176U;
unsigned int var_14 = 3912971869U;
unsigned long long int var_15 = 4038157902678163894ULL;
long long int var_18 = 8445105868301627994LL;
_Bool var_19 = (_Bool)0;
int zero = 0;
unsigned long long int var_20 = 18297554475131501875ULL;
_Bool var_21 = (_Bool)1;
unsigned int var_22 = 1885492173U;
signed char var_23 = (signed char)-116;
void init() {
}

void checksum() {
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
