#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -5630322356044197217LL;
short var_6 = (short)-4590;
unsigned long long int var_7 = 9273687273645202326ULL;
signed char var_10 = (signed char)44;
long long int var_14 = 2715525565387142321LL;
int zero = 0;
unsigned int var_19 = 3533495803U;
short var_20 = (short)-8393;
unsigned int var_21 = 335661858U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
