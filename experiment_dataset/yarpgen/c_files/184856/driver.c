#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 124344159;
unsigned long long int var_2 = 202038848992947273ULL;
long long int var_8 = 4836947445517434682LL;
signed char var_11 = (signed char)96;
int zero = 0;
unsigned long long int var_16 = 5441204396722289124ULL;
long long int var_17 = 7922841085050504143LL;
unsigned short var_18 = (unsigned short)38729;
_Bool var_19 = (_Bool)0;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
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
