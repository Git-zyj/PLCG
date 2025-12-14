#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1078784353;
int var_5 = -156000051;
int var_12 = -1176448001;
unsigned short var_13 = (unsigned short)21282;
int zero = 0;
signed char var_18 = (signed char)-22;
unsigned short var_19 = (unsigned short)38099;
unsigned short var_20 = (unsigned short)43164;
unsigned short var_21 = (unsigned short)56404;
unsigned short var_22 = (unsigned short)32165;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
