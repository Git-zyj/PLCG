#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2545966388410021612LL;
long long int var_1 = 4914874772383477382LL;
long long int var_2 = 5233288327077067907LL;
long long int var_5 = 6548293572780526189LL;
unsigned int var_11 = 415426399U;
unsigned long long int var_12 = 17371169550770364408ULL;
int var_13 = 442134521;
int zero = 0;
unsigned long long int var_15 = 597016250430784376ULL;
signed char var_16 = (signed char)46;
int var_17 = 1333298678;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
