#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)96;
_Bool var_4 = (_Bool)1;
short var_7 = (short)-18564;
_Bool var_10 = (_Bool)0;
int zero = 0;
int var_12 = 1588244433;
short var_13 = (short)-20988;
signed char var_14 = (signed char)-45;
long long int var_15 = 1897929558205164472LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
