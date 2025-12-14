#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
long long int var_3 = 4081665538703586199LL;
_Bool var_5 = (_Bool)0;
unsigned short var_17 = (unsigned short)2829;
int zero = 0;
_Bool var_18 = (_Bool)1;
unsigned int var_19 = 1923574815U;
unsigned int var_20 = 1877825708U;
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
