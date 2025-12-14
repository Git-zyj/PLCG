#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7845487573239585455LL;
long long int var_2 = 1903453033231122713LL;
_Bool var_5 = (_Bool)0;
long long int var_6 = 6071703096481727802LL;
int var_9 = -31673195;
signed char var_10 = (signed char)-112;
int zero = 0;
signed char var_11 = (signed char)-87;
unsigned short var_12 = (unsigned short)2075;
_Bool var_13 = (_Bool)0;
short var_14 = (short)-16606;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
