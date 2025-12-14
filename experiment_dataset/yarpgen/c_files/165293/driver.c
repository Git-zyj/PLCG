#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -275922685;
int var_3 = -573821711;
long long int var_5 = 5596338579221812187LL;
long long int var_9 = -2979668528171736438LL;
signed char var_10 = (signed char)-48;
int zero = 0;
short var_11 = (short)-31828;
unsigned int var_12 = 1671489676U;
short var_13 = (short)-9445;
short var_14 = (short)-27120;
int var_15 = -105356491;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
