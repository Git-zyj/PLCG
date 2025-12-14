#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
unsigned short var_4 = (unsigned short)63186;
unsigned short var_8 = (unsigned short)49549;
unsigned short var_9 = (unsigned short)48473;
unsigned short var_12 = (unsigned short)38959;
unsigned int var_13 = 167560155U;
signed char var_15 = (signed char)29;
long long int var_16 = 3239189092089878709LL;
unsigned int var_17 = 2180248784U;
unsigned int var_18 = 2525475832U;
int zero = 0;
signed char var_19 = (signed char)36;
signed char var_20 = (signed char)-11;
unsigned int var_21 = 3507764469U;
void init() {
}

void checksum() {
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
