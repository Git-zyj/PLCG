#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_2 = -5453788274769731668LL;
unsigned char var_4 = (unsigned char)97;
int var_9 = 1063568805;
signed char var_16 = (signed char)48;
int zero = 0;
long long int var_18 = 8212224829766350307LL;
signed char var_19 = (signed char)-96;
unsigned int var_20 = 3993336487U;
unsigned long long int var_21 = 5320450957794327122ULL;
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
