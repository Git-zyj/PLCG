#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 8059005954187916641LL;
unsigned short var_7 = (unsigned short)58335;
signed char var_11 = (signed char)-104;
unsigned int var_12 = 548102667U;
int var_13 = -554489923;
int zero = 0;
signed char var_14 = (signed char)61;
_Bool var_15 = (_Bool)1;
unsigned int var_16 = 3011077377U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
