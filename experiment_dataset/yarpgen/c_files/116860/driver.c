#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)62213;
_Bool var_3 = (_Bool)0;
int var_7 = 522362297;
long long int var_11 = 1295164674921971996LL;
signed char var_12 = (signed char)-111;
long long int var_14 = -4854587116362125321LL;
int zero = 0;
signed char var_15 = (signed char)-86;
_Bool var_16 = (_Bool)1;
long long int var_17 = -3988850177429032123LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
