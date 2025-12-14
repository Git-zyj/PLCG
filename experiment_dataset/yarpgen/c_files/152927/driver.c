#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-2515;
_Bool var_4 = (_Bool)0;
long long int var_5 = 6175024151393705034LL;
_Bool var_7 = (_Bool)1;
unsigned long long int var_8 = 4722221019178792436ULL;
unsigned int var_9 = 2266540037U;
int zero = 0;
unsigned int var_10 = 3275363082U;
_Bool var_11 = (_Bool)1;
signed char var_12 = (signed char)-126;
unsigned int var_13 = 2071339793U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
