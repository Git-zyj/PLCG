#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2085859391U;
unsigned int var_11 = 4212426479U;
unsigned short var_13 = (unsigned short)20704;
int zero = 0;
_Bool var_17 = (_Bool)1;
unsigned long long int var_18 = 2619006522001153052ULL;
signed char var_19 = (signed char)-98;
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
