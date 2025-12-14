#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -365595936557080444LL;
short var_3 = (short)5890;
unsigned int var_6 = 1522809438U;
unsigned long long int var_7 = 16014943275431639116ULL;
long long int var_8 = 4497317970071359891LL;
int zero = 0;
long long int var_11 = -916866204673749632LL;
unsigned long long int var_12 = 9059026400337588295ULL;
signed char var_13 = (signed char)-1;
int var_14 = -817646051;
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
