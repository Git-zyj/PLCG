#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_11 = (_Bool)1;
signed char var_13 = (signed char)-36;
unsigned char var_14 = (unsigned char)174;
int var_15 = -1362125935;
int zero = 0;
short var_18 = (short)3393;
long long int var_19 = -5688631818191003103LL;
unsigned int var_20 = 2758841850U;
void init() {
}

void checksum() {
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
