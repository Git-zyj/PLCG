#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -87733016;
long long int var_2 = -3970067781781971523LL;
_Bool var_13 = (_Bool)0;
unsigned long long int var_17 = 18436859532758919331ULL;
int zero = 0;
unsigned long long int var_18 = 10985460183821633006ULL;
unsigned int var_19 = 1547066895U;
int var_20 = -1483419714;
_Bool var_21 = (_Bool)0;
long long int var_22 = -6770774061186537441LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
