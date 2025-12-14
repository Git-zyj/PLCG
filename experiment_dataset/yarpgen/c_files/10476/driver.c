#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2316390779385346864LL;
long long int var_2 = 3074285511580199361LL;
long long int var_4 = 5742743740872372515LL;
long long int var_9 = 5840731675690710060LL;
int zero = 0;
long long int var_12 = -346514541614863471LL;
long long int var_13 = -3782407132118910161LL;
long long int var_14 = -5737751560750936618LL;
long long int var_15 = -4017188752839826265LL;
long long int var_16 = -3924297631768557674LL;
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
