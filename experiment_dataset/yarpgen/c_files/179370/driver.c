#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_2 = 2597435405U;
int var_5 = -1648019162;
unsigned short var_6 = (unsigned short)16542;
_Bool var_9 = (_Bool)0;
unsigned short var_11 = (unsigned short)55834;
long long int var_12 = -1631930998614541250LL;
int zero = 0;
unsigned short var_13 = (unsigned short)13923;
signed char var_14 = (signed char)75;
long long int var_15 = 1212210865982967199LL;
int var_16 = 832690967;
void init() {
}

void checksum() {
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
