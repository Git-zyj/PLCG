#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4104236940U;
unsigned short var_2 = (unsigned short)25750;
long long int var_3 = -2131439199286596580LL;
signed char var_5 = (signed char)-109;
int var_6 = 2014007280;
unsigned long long int var_10 = 16669954178683657048ULL;
unsigned short var_15 = (unsigned short)26613;
int zero = 0;
unsigned long long int var_16 = 4781014520545041678ULL;
_Bool var_17 = (_Bool)0;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
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
