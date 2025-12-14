#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 581265424U;
unsigned long long int var_1 = 10671407206042013718ULL;
_Bool var_2 = (_Bool)1;
unsigned short var_4 = (unsigned short)5357;
_Bool var_6 = (_Bool)1;
long long int var_8 = 371056042381052428LL;
unsigned long long int var_10 = 9613623001973648571ULL;
int zero = 0;
int var_11 = -1983883849;
int var_12 = -69751711;
long long int var_13 = -650162337049890459LL;
signed char var_14 = (signed char)102;
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
