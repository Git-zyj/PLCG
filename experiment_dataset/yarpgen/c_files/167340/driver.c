#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 1223490817;
_Bool var_10 = (_Bool)1;
unsigned int var_11 = 1537587072U;
short var_16 = (short)-28118;
int zero = 0;
int var_17 = 91115548;
signed char var_18 = (signed char)42;
int var_19 = -233058902;
long long int var_20 = 10209999965988723LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
