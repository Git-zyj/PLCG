#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 18073167412451598053ULL;
unsigned long long int var_2 = 11577986537268335124ULL;
unsigned int var_4 = 3358018070U;
unsigned short var_8 = (unsigned short)33773;
signed char var_9 = (signed char)-108;
unsigned long long int var_13 = 6699464020702423396ULL;
int var_14 = -1551844640;
int zero = 0;
unsigned long long int var_16 = 9644230083470471864ULL;
long long int var_17 = -6294854968771249523LL;
signed char var_18 = (signed char)43;
int var_19 = 345295904;
long long int var_20 = 2035608882364056127LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
