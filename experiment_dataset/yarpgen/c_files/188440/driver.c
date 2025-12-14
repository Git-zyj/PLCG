#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_10 = (short)-14534;
long long int var_12 = 7647196062392521708LL;
long long int var_18 = -3432584722533812234LL;
int zero = 0;
unsigned long long int var_20 = 7566431774353913486ULL;
long long int var_21 = -6890285822256954216LL;
unsigned int var_22 = 66800734U;
short var_23 = (short)16173;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
