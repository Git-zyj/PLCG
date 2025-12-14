#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_3 = 15107756570778516245ULL;
signed char var_7 = (signed char)-119;
_Bool var_9 = (_Bool)0;
signed char var_12 = (signed char)40;
int zero = 0;
unsigned long long int var_14 = 18173159816449965526ULL;
unsigned short var_15 = (unsigned short)49311;
unsigned long long int var_16 = 6019265398459538784ULL;
unsigned long long int var_17 = 11047839658422940158ULL;
unsigned int var_18 = 3666900933U;
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
