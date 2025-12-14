#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned long long int var_3 = 7193627679206806218ULL;
unsigned long long int var_4 = 7018250985374002426ULL;
unsigned int var_5 = 1962879877U;
unsigned long long int var_7 = 5769568697101417521ULL;
short var_11 = (short)11733;
int zero = 0;
unsigned long long int var_12 = 14264698001082002191ULL;
long long int var_13 = -6324218982807672681LL;
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
