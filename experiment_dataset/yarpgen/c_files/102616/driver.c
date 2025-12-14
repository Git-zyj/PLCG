#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_1 = (unsigned char)47;
unsigned short var_4 = (unsigned short)31780;
unsigned short var_9 = (unsigned short)24405;
unsigned char var_10 = (unsigned char)36;
unsigned int var_11 = 795389018U;
int var_12 = -2041461528;
unsigned long long int var_14 = 16591832938868230955ULL;
unsigned short var_18 = (unsigned short)54556;
int zero = 0;
unsigned char var_19 = (unsigned char)60;
int var_20 = 160851126;
unsigned int var_21 = 938476771U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
