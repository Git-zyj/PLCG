#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7874639573375105908LL;
signed char var_1 = (signed char)-126;
unsigned int var_2 = 574603153U;
short var_5 = (short)23261;
int var_6 = -47756616;
long long int var_7 = 5403678287198918208LL;
_Bool var_8 = (_Bool)0;
_Bool var_10 = (_Bool)0;
short var_11 = (short)24746;
int zero = 0;
signed char var_12 = (signed char)115;
unsigned long long int var_13 = 15322566661653957960ULL;
signed char var_14 = (signed char)34;
unsigned long long int var_15 = 14271852651291725097ULL;
int var_16 = -2008337801;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
