#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2343236779403985674LL;
long long int var_2 = 2001026155216961896LL;
unsigned char var_3 = (unsigned char)35;
long long int var_5 = 8028400137463858399LL;
_Bool var_7 = (_Bool)1;
_Bool var_8 = (_Bool)0;
_Bool var_10 = (_Bool)0;
int zero = 0;
int var_14 = -1142411607;
int var_15 = 1444819805;
int var_16 = -1603351569;
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
