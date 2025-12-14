#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
signed char var_6 = (signed char)-86;
unsigned long long int var_10 = 6516820815274862756ULL;
unsigned long long int var_14 = 12437985088400307620ULL;
unsigned int var_16 = 3108439294U;
int zero = 0;
short var_19 = (short)-9003;
unsigned long long int var_20 = 12594987835552772167ULL;
void init() {
}

void checksum() {
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
