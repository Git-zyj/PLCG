#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1805510284;
_Bool var_4 = (_Bool)0;
long long int var_5 = 7591441124906958334LL;
long long int var_8 = 3858254504458722823LL;
unsigned long long int var_10 = 16805011116652601414ULL;
unsigned int var_14 = 2560449599U;
unsigned long long int var_16 = 10037171345872527684ULL;
unsigned short var_17 = (unsigned short)24325;
int zero = 0;
int var_18 = -661060101;
signed char var_19 = (signed char)15;
signed char var_20 = (signed char)55;
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
