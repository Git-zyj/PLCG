#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 7970186277879794187ULL;
long long int var_3 = 4707100148998685203LL;
signed char var_4 = (signed char)88;
unsigned int var_8 = 2216808469U;
unsigned int var_13 = 2864399371U;
unsigned int var_14 = 2448067422U;
unsigned int var_17 = 1944338267U;
int zero = 0;
_Bool var_20 = (_Bool)1;
unsigned int var_21 = 2405834330U;
short var_22 = (short)6342;
short var_23 = (short)17781;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
