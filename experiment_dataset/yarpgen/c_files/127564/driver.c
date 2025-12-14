#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_6 = (_Bool)0;
unsigned long long int var_9 = 11254968472183348902ULL;
unsigned int var_11 = 804466846U;
unsigned int var_12 = 1141569526U;
_Bool var_13 = (_Bool)1;
int zero = 0;
signed char var_17 = (signed char)-81;
unsigned long long int var_18 = 375023074951985644ULL;
void init() {
}

void checksum() {
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
