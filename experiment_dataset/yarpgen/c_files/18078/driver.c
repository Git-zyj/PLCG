#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 967185054U;
unsigned long long int var_3 = 3787493907426912224ULL;
unsigned short var_4 = (unsigned short)58240;
signed char var_9 = (signed char)53;
unsigned short var_13 = (unsigned short)38869;
unsigned int var_15 = 1184427774U;
int zero = 0;
unsigned short var_17 = (unsigned short)26477;
unsigned long long int var_18 = 867610767639618903ULL;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
