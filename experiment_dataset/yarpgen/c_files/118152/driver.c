#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_9 = 277838979U;
int var_10 = 1610678109;
_Bool var_12 = (_Bool)1;
signed char var_16 = (signed char)-114;
int var_18 = 1629996512;
short var_19 = (short)32713;
int zero = 0;
int var_20 = -2037600335;
signed char var_21 = (signed char)126;
unsigned long long int var_22 = 2226966662849077926ULL;
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
