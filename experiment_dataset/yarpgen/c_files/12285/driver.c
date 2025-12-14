#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_1 = 120961337;
_Bool var_2 = (_Bool)0;
unsigned long long int var_3 = 17205849820160830978ULL;
int var_5 = -1187267281;
int var_11 = -352239513;
long long int var_12 = 6041932252479493261LL;
long long int var_14 = 2633074497759070676LL;
int zero = 0;
int var_16 = -1819355372;
unsigned int var_17 = 2830660741U;
int var_18 = 1690860620;
unsigned int var_19 = 945759102U;
unsigned long long int var_20 = 5643620851183249156ULL;
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
