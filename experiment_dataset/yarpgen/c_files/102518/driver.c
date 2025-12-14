#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_1 = (signed char)96;
signed char var_4 = (signed char)62;
int var_5 = -1558332964;
signed char var_7 = (signed char)112;
long long int var_9 = 67411233278368499LL;
short var_10 = (short)14584;
unsigned int var_11 = 3068520391U;
int var_13 = 2021478;
_Bool var_15 = (_Bool)0;
int zero = 0;
long long int var_16 = 10566474395866001LL;
signed char var_17 = (signed char)45;
void init() {
}

void checksum() {
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
