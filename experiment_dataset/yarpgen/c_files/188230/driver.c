#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1801440598;
int var_5 = -464080464;
int var_9 = -2034879939;
_Bool var_10 = (_Bool)0;
unsigned long long int var_11 = 1481033397567718778ULL;
unsigned short var_12 = (unsigned short)16807;
int var_13 = 1464000473;
unsigned int var_14 = 3146799571U;
unsigned int var_15 = 4142263382U;
int zero = 0;
int var_17 = -900371464;
unsigned long long int var_18 = 16333462026748420313ULL;
short var_19 = (short)23867;
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
