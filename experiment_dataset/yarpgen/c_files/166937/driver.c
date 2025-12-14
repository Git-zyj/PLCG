#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_5 = (_Bool)1;
_Bool var_7 = (_Bool)1;
signed char var_10 = (signed char)-7;
unsigned long long int var_11 = 11311874534327608026ULL;
_Bool var_13 = (_Bool)0;
int zero = 0;
_Bool var_15 = (_Bool)0;
unsigned long long int var_16 = 9210180992713000941ULL;
void init() {
}

void checksum() {
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
