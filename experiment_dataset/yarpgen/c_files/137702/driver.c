#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned char var_3 = (unsigned char)173;
short var_5 = (short)-28090;
int var_14 = -1475422930;
int zero = 0;
long long int var_17 = 3454120383191707775LL;
unsigned int var_18 = 3807406161U;
unsigned short var_19 = (unsigned short)28835;
long long int var_20 = 4057983671833308948LL;
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
