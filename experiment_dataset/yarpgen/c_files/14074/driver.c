#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 3671854996644567493LL;
_Bool var_4 = (_Bool)0;
short var_8 = (short)16838;
int zero = 0;
long long int var_11 = 5299443315646486002LL;
signed char var_12 = (signed char)-15;
long long int var_13 = 7480373544171364716LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
