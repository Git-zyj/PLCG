#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4224632844U;
int var_1 = -20196230;
_Bool var_2 = (_Bool)0;
unsigned long long int var_3 = 11153544706780183901ULL;
_Bool var_4 = (_Bool)0;
unsigned int var_13 = 2162615807U;
int zero = 0;
_Bool var_14 = (_Bool)1;
short var_15 = (short)-414;
int var_16 = -1111431249;
unsigned long long int var_17 = 12869738641684976213ULL;
long long int var_18 = -8875132912404824085LL;
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
