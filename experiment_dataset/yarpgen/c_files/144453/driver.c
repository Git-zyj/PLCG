#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1623177750U;
int var_3 = -766217187;
unsigned int var_4 = 3075634620U;
int var_6 = -1996915102;
signed char var_12 = (signed char)26;
unsigned long long int var_13 = 13815921767244281811ULL;
short var_14 = (short)-7308;
int zero = 0;
short var_15 = (short)20338;
long long int var_16 = -3259406169176115712LL;
long long int var_17 = 5894544754379228990LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
