#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1668698300;
long long int var_3 = -9074888419879081670LL;
int var_7 = -1310151131;
unsigned int var_9 = 2745199864U;
unsigned int var_10 = 1934951840U;
short var_11 = (short)8627;
int var_13 = -1170741683;
_Bool var_14 = (_Bool)0;
unsigned short var_15 = (unsigned short)877;
int zero = 0;
unsigned long long int var_16 = 4697472731134219051ULL;
short var_17 = (short)-17495;
_Bool var_18 = (_Bool)1;
int var_19 = 1573406121;
short var_20 = (short)-29385;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
