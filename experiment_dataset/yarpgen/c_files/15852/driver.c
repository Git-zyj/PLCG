#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
_Bool var_5 = (_Bool)0;
long long int var_6 = -3792773997802677033LL;
unsigned char var_7 = (unsigned char)136;
_Bool var_8 = (_Bool)1;
int var_12 = -16371;
int zero = 0;
_Bool var_14 = (_Bool)0;
_Bool var_15 = (_Bool)1;
long long int var_16 = -3077329511401500674LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
