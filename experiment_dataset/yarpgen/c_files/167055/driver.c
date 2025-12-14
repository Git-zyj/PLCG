#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_13 = 12103062973561176799ULL;
unsigned long long int var_15 = 3809938134052276808ULL;
int zero = 0;
_Bool var_17 = (_Bool)1;
signed char var_18 = (signed char)30;
signed char var_19 = (signed char)-60;
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
