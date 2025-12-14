#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 763317643;
unsigned int var_1 = 2425823990U;
int var_2 = -1367753562;
_Bool var_3 = (_Bool)1;
signed char var_7 = (signed char)-53;
signed char var_8 = (signed char)-125;
unsigned int var_9 = 48317339U;
unsigned long long int var_13 = 1363292441235287797ULL;
signed char var_15 = (signed char)58;
int zero = 0;
_Bool var_16 = (_Bool)1;
_Bool var_17 = (_Bool)0;
unsigned long long int var_18 = 5830181547140149172ULL;
void init() {
}

void checksum() {
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
