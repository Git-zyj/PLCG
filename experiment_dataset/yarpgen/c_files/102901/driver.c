#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)-123;
unsigned short var_7 = (unsigned short)3173;
int var_8 = 763294876;
long long int var_10 = -5421017634836005571LL;
int zero = 0;
unsigned int var_17 = 670013182U;
unsigned short var_18 = (unsigned short)62207;
int var_19 = -1719487930;
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
