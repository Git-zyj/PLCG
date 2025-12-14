#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
int var_6 = -1638616724;
signed char var_10 = (signed char)-87;
unsigned short var_15 = (unsigned short)23361;
int zero = 0;
long long int var_19 = -9212914318798966338LL;
int var_20 = -28475674;
signed char var_21 = (signed char)80;
unsigned short var_22 = (unsigned short)17476;
void init() {
}

void checksum() {
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
