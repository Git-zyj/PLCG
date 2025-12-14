#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)46576;
unsigned long long int var_2 = 16151585631371249845ULL;
signed char var_3 = (signed char)120;
unsigned long long int var_4 = 4182264314166054924ULL;
_Bool var_7 = (_Bool)1;
signed char var_9 = (signed char)122;
long long int var_12 = -1871489938421025420LL;
unsigned long long int var_15 = 9437131653086862768ULL;
int zero = 0;
long long int var_19 = -685416858085923812LL;
signed char var_20 = (signed char)96;
unsigned short var_21 = (unsigned short)2114;
unsigned short var_22 = (unsigned short)16312;
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
