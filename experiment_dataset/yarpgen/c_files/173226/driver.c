#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)8078;
long long int var_6 = -2135942161147770392LL;
long long int var_11 = 8474963796163962710LL;
int zero = 0;
short var_13 = (short)25878;
long long int var_14 = 2095739187861680358LL;
long long int var_15 = -5925019010254056544LL;
void init() {
}

void checksum() {
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
