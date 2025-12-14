#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_2 = (unsigned short)39908;
long long int var_6 = 4442495644209639433LL;
int var_7 = 74465294;
_Bool var_10 = (_Bool)0;
_Bool var_12 = (_Bool)1;
_Bool var_14 = (_Bool)0;
unsigned int var_17 = 1779816323U;
_Bool var_18 = (_Bool)0;
int zero = 0;
long long int var_19 = -5124605458428157626LL;
long long int var_20 = 1079140686850807973LL;
void init() {
}

void checksum() {
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
