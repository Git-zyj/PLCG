#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3194402710U;
int var_1 = -1403667679;
unsigned short var_6 = (unsigned short)20742;
long long int var_8 = -8393405859388491120LL;
int var_9 = 1979617426;
unsigned short var_12 = (unsigned short)30088;
int zero = 0;
long long int var_15 = -6449826688847477433LL;
_Bool var_16 = (_Bool)0;
unsigned int var_17 = 2266535638U;
long long int var_18 = -1605573624096190320LL;
long long int var_19 = -1813696433546340553LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
