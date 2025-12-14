#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1509182224;
int var_1 = 803896173;
int var_6 = -630310552;
long long int var_8 = -967938152783035553LL;
unsigned int var_10 = 2301463125U;
_Bool var_13 = (_Bool)0;
int zero = 0;
long long int var_20 = -4706044743705796443LL;
unsigned int var_21 = 3892458945U;
short var_22 = (short)26239;
int var_23 = -1143736009;
unsigned int var_24 = 3073863861U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
