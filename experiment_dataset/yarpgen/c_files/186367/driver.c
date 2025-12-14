#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
_Bool var_2 = (_Bool)1;
long long int var_4 = -8332164026532777108LL;
signed char var_7 = (signed char)-78;
long long int var_8 = 3261430105527511603LL;
_Bool var_9 = (_Bool)1;
unsigned long long int var_13 = 13330194946075639355ULL;
int var_16 = -1526303416;
int zero = 0;
long long int var_17 = -2190584903834438651LL;
_Bool var_18 = (_Bool)1;
long long int var_19 = -3062232675747796545LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
