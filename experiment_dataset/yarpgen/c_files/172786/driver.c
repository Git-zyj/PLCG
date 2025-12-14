#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)16182;
unsigned long long int var_8 = 16282134213126085241ULL;
short var_9 = (short)-11397;
long long int var_11 = 8470607492967753194LL;
int zero = 0;
unsigned long long int var_12 = 2307837177795590473ULL;
short var_13 = (short)-24271;
unsigned long long int var_14 = 13941936301591019871ULL;
short var_15 = (short)14146;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
