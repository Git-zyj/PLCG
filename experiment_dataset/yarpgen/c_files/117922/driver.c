#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_6 = (signed char)24;
unsigned long long int var_10 = 7365561749002410562ULL;
unsigned long long int var_11 = 3820153167958929781ULL;
int zero = 0;
signed char var_12 = (signed char)-113;
signed char var_13 = (signed char)-45;
void init() {
}

void checksum() {
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
