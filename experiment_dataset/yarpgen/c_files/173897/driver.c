#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)9285;
signed char var_1 = (signed char)61;
long long int var_4 = -281925753469633620LL;
long long int var_6 = 715674869980988353LL;
unsigned int var_7 = 475790772U;
unsigned short var_10 = (unsigned short)6998;
unsigned int var_11 = 317928854U;
unsigned long long int var_12 = 1817969259656078281ULL;
long long int var_14 = -7351328051618766523LL;
unsigned short var_17 = (unsigned short)38507;
unsigned long long int var_18 = 5001290288700429752ULL;
int zero = 0;
signed char var_19 = (signed char)-7;
_Bool var_20 = (_Bool)1;
unsigned int var_21 = 3056137229U;
unsigned long long int var_22 = 7517389868571952368ULL;
signed char var_23 = (signed char)72;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
