#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)33274;
unsigned long long int var_2 = 4987471945361870360ULL;
unsigned int var_4 = 2396396639U;
unsigned short var_5 = (unsigned short)50818;
unsigned int var_6 = 3101943938U;
int var_10 = 1247516030;
int zero = 0;
_Bool var_11 = (_Bool)0;
_Bool var_12 = (_Bool)1;
signed char var_13 = (signed char)-66;
unsigned long long int var_14 = 14466054409370582619ULL;
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
