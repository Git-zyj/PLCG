#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int zero = 0;
unsigned long long int var_14 = 6010485044636334533ULL;
_Bool var_15 = (_Bool)0;
short var_16 = (short)15692;
unsigned int var_17 = 3401966765U;
unsigned short var_18 = (unsigned short)60195;
_Bool var_19 = (_Bool)0;
unsigned long long int var_20 = 5114183872368909799ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
