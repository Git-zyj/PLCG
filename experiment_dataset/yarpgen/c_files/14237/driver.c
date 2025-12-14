#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4118984805951982743LL;
signed char var_1 = (signed char)51;
long long int var_5 = -1688305300297321814LL;
long long int var_6 = 6207067312775300724LL;
unsigned long long int var_7 = 15942251024464575959ULL;
int var_10 = -1121491776;
int zero = 0;
short var_12 = (short)30998;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 2737868776172037968ULL;
unsigned int var_15 = 849046590U;
unsigned short var_16 = (unsigned short)55785;
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
