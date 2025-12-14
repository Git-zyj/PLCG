#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17243185275765787624ULL;
unsigned long long int var_2 = 9889401687415511293ULL;
long long int var_5 = -3314525861261965594LL;
unsigned long long int var_7 = 11396870079601757664ULL;
_Bool var_10 = (_Bool)0;
int zero = 0;
unsigned long long int var_14 = 179958779121031325ULL;
_Bool var_15 = (_Bool)0;
_Bool var_16 = (_Bool)1;
_Bool var_17 = (_Bool)0;
long long int var_18 = 6135062015443458590LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
