#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 904855637U;
short var_6 = (short)-9551;
long long int var_12 = 6533962426494526923LL;
signed char var_14 = (signed char)108;
short var_17 = (short)13959;
int zero = 0;
short var_20 = (short)14145;
_Bool var_21 = (_Bool)1;
long long int var_22 = -34468035450102566LL;
short var_23 = (short)-5938;
_Bool var_24 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
