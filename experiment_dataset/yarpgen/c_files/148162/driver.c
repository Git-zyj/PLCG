#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1062503158U;
unsigned short var_1 = (unsigned short)61650;
long long int var_2 = 7173286153217978319LL;
long long int var_5 = -9158928824522642408LL;
_Bool var_7 = (_Bool)0;
int var_9 = 1756993653;
long long int var_11 = 1965028291061314674LL;
_Bool var_13 = (_Bool)1;
unsigned short var_14 = (unsigned short)28731;
short var_18 = (short)2388;
_Bool var_19 = (_Bool)0;
int zero = 0;
int var_20 = 550029113;
unsigned int var_21 = 20998105U;
unsigned long long int var_22 = 2003047876344741160ULL;
unsigned int var_23 = 420861196U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
