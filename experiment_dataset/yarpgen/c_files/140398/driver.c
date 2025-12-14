#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)0;
long long int var_12 = -2184542253052256215LL;
unsigned long long int var_13 = 11788777683730294442ULL;
unsigned int var_14 = 3833878448U;
short var_15 = (short)28373;
int zero = 0;
long long int var_20 = -3591538184871655424LL;
signed char var_21 = (signed char)-12;
unsigned long long int var_22 = 17745978636532977494ULL;
signed char var_23 = (signed char)75;
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
