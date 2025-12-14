#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2738113562U;
long long int var_3 = 7783194662687139179LL;
unsigned short var_5 = (unsigned short)36346;
short var_6 = (short)-1473;
_Bool var_7 = (_Bool)1;
unsigned long long int var_8 = 17089973222959322528ULL;
long long int var_10 = -2869477787183190535LL;
unsigned int var_11 = 2906607538U;
signed char var_13 = (signed char)-94;
int zero = 0;
short var_14 = (short)-2999;
_Bool var_15 = (_Bool)1;
unsigned int var_16 = 793671784U;
void init() {
}

void checksum() {
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
