#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3198438643159691475ULL;
int var_1 = 32624782;
unsigned long long int var_3 = 16838015944728986633ULL;
int var_4 = -1535400505;
int var_5 = 977753805;
signed char var_8 = (signed char)50;
int zero = 0;
_Bool var_10 = (_Bool)0;
int var_11 = -713327923;
signed char var_12 = (signed char)-101;
int var_13 = 1811252077;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
