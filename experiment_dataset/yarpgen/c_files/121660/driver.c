#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1391161736;
unsigned int var_2 = 1786375256U;
long long int var_9 = -6856249268992380407LL;
long long int var_12 = 5099681531617031063LL;
unsigned int var_17 = 2863184520U;
unsigned long long int var_18 = 8456031810701798699ULL;
int zero = 0;
unsigned short var_19 = (unsigned short)53497;
_Bool var_20 = (_Bool)0;
unsigned int var_21 = 1156103810U;
unsigned int var_22 = 1745334908U;
_Bool var_23 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
