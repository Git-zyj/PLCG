#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_8 = -5836927555911610901LL;
_Bool var_10 = (_Bool)1;
unsigned char var_13 = (unsigned char)97;
_Bool var_16 = (_Bool)0;
short var_18 = (short)-19591;
int zero = 0;
_Bool var_20 = (_Bool)1;
long long int var_21 = -8747645128071082366LL;
long long int var_22 = 7810163941624389361LL;
void init() {
}

void checksum() {
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
