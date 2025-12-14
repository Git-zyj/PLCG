#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3605272338U;
short var_8 = (short)-7254;
_Bool var_11 = (_Bool)0;
int zero = 0;
long long int var_16 = 736584384325235059LL;
signed char var_17 = (signed char)-75;
unsigned short var_18 = (unsigned short)64243;
long long int var_19 = -5601260074061856172LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
