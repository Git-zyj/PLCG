#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_2 = 1829680601U;
long long int var_3 = 9095689246025468264LL;
long long int var_5 = -4410330117671566000LL;
_Bool var_12 = (_Bool)0;
long long int var_17 = -7280001053837812726LL;
long long int var_18 = 8046024243121055586LL;
int zero = 0;
long long int var_19 = -5908200484506284065LL;
long long int var_20 = 3963523752694298149LL;
_Bool var_21 = (_Bool)0;
unsigned int var_22 = 3707977628U;
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
