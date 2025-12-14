#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 11226327381760411635ULL;
_Bool var_10 = (_Bool)0;
long long int var_12 = 7407227093339711311LL;
_Bool var_13 = (_Bool)1;
int zero = 0;
int var_18 = 250793172;
_Bool var_19 = (_Bool)1;
int var_20 = -2007297309;
unsigned int var_21 = 1032355228U;
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
