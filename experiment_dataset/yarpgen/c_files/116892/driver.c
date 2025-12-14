#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_7 = 3033290816U;
_Bool var_8 = (_Bool)0;
long long int var_11 = -7313943586258182591LL;
short var_15 = (short)-23983;
unsigned int var_16 = 3728808273U;
int zero = 0;
short var_17 = (short)-14388;
int var_18 = 758661689;
int var_19 = -341850554;
void init() {
}

void checksum() {
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
