#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)3806;
signed char var_1 = (signed char)-70;
int var_2 = 863809622;
int var_3 = -1285948736;
_Bool var_6 = (_Bool)0;
long long int var_9 = -3582557041167682933LL;
int var_11 = -441612804;
int zero = 0;
signed char var_16 = (signed char)-25;
unsigned short var_17 = (unsigned short)45685;
long long int var_18 = 6343802998658955808LL;
long long int var_19 = 4677405353618845105LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
