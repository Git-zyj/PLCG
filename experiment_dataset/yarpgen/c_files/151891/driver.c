#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1078212350U;
unsigned int var_1 = 3352521572U;
int var_7 = 939934154;
unsigned long long int var_8 = 1941383975755458908ULL;
_Bool var_9 = (_Bool)1;
unsigned long long int var_10 = 13490839828221018280ULL;
int var_13 = -2091955001;
int zero = 0;
_Bool var_17 = (_Bool)1;
unsigned long long int var_18 = 1544019054401839375ULL;
int var_19 = -273679434;
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
