#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)17;
short var_1 = (short)-20884;
signed char var_4 = (signed char)-98;
unsigned short var_7 = (unsigned short)20713;
short var_9 = (short)8103;
int zero = 0;
_Bool var_15 = (_Bool)1;
short var_16 = (short)-9654;
unsigned long long int var_17 = 7597267358228547924ULL;
unsigned int var_18 = 3792083395U;
unsigned int var_19 = 215911654U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
