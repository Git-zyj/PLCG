#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_6 = (_Bool)1;
unsigned int var_9 = 2918735694U;
unsigned long long int var_11 = 17749774251346822387ULL;
int zero = 0;
unsigned int var_18 = 2127539591U;
unsigned int var_19 = 3580452862U;
signed char var_20 = (signed char)4;
int var_21 = 1620008302;
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
