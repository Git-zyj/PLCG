#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1029524172U;
_Bool var_6 = (_Bool)1;
unsigned int var_7 = 853408629U;
int var_8 = 2030392102;
unsigned char var_11 = (unsigned char)93;
int var_12 = -1592779134;
unsigned long long int var_16 = 2358977455728410810ULL;
int zero = 0;
unsigned long long int var_18 = 11918725639654573092ULL;
unsigned long long int var_19 = 18088430270994749506ULL;
unsigned char var_20 = (unsigned char)25;
void init() {
}

void checksum() {
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
