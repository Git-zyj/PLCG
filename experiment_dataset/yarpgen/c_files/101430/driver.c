#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)1;
unsigned short var_6 = (unsigned short)29914;
signed char var_7 = (signed char)108;
_Bool var_9 = (_Bool)1;
short var_10 = (short)-6748;
unsigned long long int var_11 = 14459062489637962565ULL;
_Bool var_12 = (_Bool)1;
unsigned int var_16 = 2017431436U;
int zero = 0;
_Bool var_20 = (_Bool)1;
unsigned int var_21 = 1335371322U;
void init() {
}

void checksum() {
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
