#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 8721136748087590158ULL;
unsigned long long int var_2 = 5254188143562420372ULL;
unsigned int var_5 = 3047786043U;
int var_6 = 1736251229;
int var_8 = -1280170154;
int var_9 = -144749354;
unsigned long long int var_10 = 15830346835009093077ULL;
unsigned long long int var_11 = 1459290610149417355ULL;
unsigned long long int var_13 = 8809365373916439030ULL;
unsigned int var_15 = 4120873055U;
int zero = 0;
unsigned int var_16 = 674934791U;
int var_17 = -1255815481;
unsigned int var_18 = 1841777386U;
unsigned long long int var_19 = 11915741102916457579ULL;
unsigned long long int var_20 = 3089701256482616273ULL;
void init() {
}

void checksum() {
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
