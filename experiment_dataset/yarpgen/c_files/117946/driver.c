#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)110;
unsigned int var_5 = 2743833444U;
int var_6 = 1839299783;
long long int var_7 = 8050319558120605366LL;
unsigned long long int var_10 = 5327317365792178913ULL;
signed char var_11 = (signed char)38;
long long int var_13 = 6752153432180057600LL;
unsigned short var_16 = (unsigned short)7456;
unsigned short var_17 = (unsigned short)50948;
int zero = 0;
signed char var_18 = (signed char)67;
long long int var_19 = -3585655478810375647LL;
unsigned int var_20 = 806705319U;
int var_21 = -633607029;
int var_22 = 1467358143;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
