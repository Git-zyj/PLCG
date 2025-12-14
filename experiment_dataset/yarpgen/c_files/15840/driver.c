#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_1 = -1960353613;
int var_3 = 228314068;
unsigned long long int var_5 = 12632442998663182528ULL;
unsigned int var_6 = 3263267126U;
signed char var_12 = (signed char)-65;
unsigned short var_13 = (unsigned short)62181;
int zero = 0;
signed char var_14 = (signed char)-122;
signed char var_15 = (signed char)-119;
signed char var_16 = (signed char)91;
_Bool var_17 = (_Bool)0;
unsigned int var_18 = 215456338U;
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
