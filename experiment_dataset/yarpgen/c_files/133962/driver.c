#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned int var_3 = 891525477U;
unsigned long long int var_4 = 5927333463264905525ULL;
unsigned long long int var_5 = 13949926496910423315ULL;
unsigned long long int var_6 = 3644697705228554395ULL;
int zero = 0;
unsigned long long int var_11 = 1479320344042215622ULL;
unsigned long long int var_12 = 14003764027094213250ULL;
_Bool var_13 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
