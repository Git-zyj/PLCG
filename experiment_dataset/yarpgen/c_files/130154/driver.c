#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -599020974255581617LL;
unsigned long long int var_6 = 11746126138389607138ULL;
int var_8 = -1414051362;
int zero = 0;
short var_12 = (short)27052;
short var_13 = (short)-2772;
unsigned short var_14 = (unsigned short)64828;
unsigned short var_15 = (unsigned short)10242;
unsigned int var_16 = 2369260422U;
unsigned int var_17 = 3921806159U;
unsigned long long int var_18 = 9622380839033142703ULL;
short var_19 = (short)-11831;
unsigned short var_20 = (unsigned short)9274;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
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
