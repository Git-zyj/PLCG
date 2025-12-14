#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -449830068;
unsigned long long int var_1 = 1395915135488682572ULL;
unsigned short var_2 = (unsigned short)23606;
unsigned int var_3 = 3261066560U;
signed char var_8 = (signed char)-89;
long long int var_10 = -2589190083342168027LL;
unsigned int var_11 = 3718699172U;
int zero = 0;
int var_17 = -573157934;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
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
