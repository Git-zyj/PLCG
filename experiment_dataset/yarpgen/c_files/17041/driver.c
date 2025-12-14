#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
long long int var_2 = 8741977091151025367LL;
int var_10 = -540827191;
short var_14 = (short)-21483;
signed char var_18 = (signed char)-36;
int zero = 0;
short var_20 = (short)30424;
short var_21 = (short)-16886;
short var_22 = (short)-26423;
void init() {
}

void checksum() {
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
