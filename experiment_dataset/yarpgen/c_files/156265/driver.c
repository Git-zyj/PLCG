#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_12 = -7106804806267953843LL;
short var_14 = (short)10168;
int zero = 0;
_Bool var_18 = (_Bool)0;
unsigned long long int var_19 = 12219245009403127176ULL;
long long int var_20 = -5522093027557449277LL;
unsigned long long int var_21 = 16509996179953759478ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
