#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)8874;
unsigned long long int var_7 = 11729945968024539794ULL;
short var_9 = (short)5905;
unsigned short var_11 = (unsigned short)29194;
_Bool var_15 = (_Bool)0;
int zero = 0;
unsigned long long int var_16 = 5991282924232902880ULL;
_Bool var_17 = (_Bool)1;
unsigned int var_18 = 4256058264U;
unsigned long long int var_19 = 7508301180915858925ULL;
void init() {
}

void checksum() {
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
