#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)42727;
int var_2 = -44426260;
_Bool var_4 = (_Bool)0;
int var_5 = -1614489223;
signed char var_6 = (signed char)87;
unsigned short var_11 = (unsigned short)18468;
int zero = 0;
unsigned int var_13 = 2378572616U;
_Bool var_14 = (_Bool)0;
long long int var_15 = -5120835437055283305LL;
unsigned short var_16 = (unsigned short)3526;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
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
