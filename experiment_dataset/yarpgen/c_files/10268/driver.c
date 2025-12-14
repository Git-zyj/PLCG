#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 17083325057798902586ULL;
signed char var_5 = (signed char)92;
_Bool var_8 = (_Bool)0;
int var_10 = -616682734;
long long int var_12 = -7555012761804572487LL;
int var_14 = 277080725;
int zero = 0;
unsigned char var_17 = (unsigned char)94;
unsigned char var_18 = (unsigned char)29;
long long int var_19 = 504546423273502577LL;
unsigned char var_20 = (unsigned char)20;
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
