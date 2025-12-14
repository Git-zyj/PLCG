#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-13161;
int var_1 = -1008073837;
unsigned int var_3 = 673982643U;
short var_6 = (short)-14093;
signed char var_7 = (signed char)33;
_Bool var_9 = (_Bool)0;
short var_10 = (short)-13330;
long long int var_11 = 3031107974714290552LL;
_Bool var_12 = (_Bool)0;
unsigned int var_13 = 3511723397U;
int zero = 0;
unsigned long long int var_14 = 9427449797716504270ULL;
unsigned int var_15 = 1105546126U;
int var_16 = 1502115985;
signed char var_17 = (signed char)45;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
