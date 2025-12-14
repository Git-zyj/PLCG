#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 322672133U;
int var_2 = -996384971;
unsigned long long int var_6 = 13271641279232926538ULL;
int var_8 = -1747693656;
_Bool var_10 = (_Bool)1;
unsigned short var_13 = (unsigned short)54001;
int var_17 = 890470315;
int zero = 0;
int var_20 = 1600038429;
unsigned short var_21 = (unsigned short)20683;
unsigned int var_22 = 3129351395U;
unsigned short var_23 = (unsigned short)34718;
unsigned long long int var_24 = 13332896606607694970ULL;
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
