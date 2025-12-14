#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)89;
unsigned char var_1 = (unsigned char)173;
unsigned int var_7 = 3146356470U;
unsigned int var_8 = 3552811859U;
long long int var_10 = 2289787467121478865LL;
_Bool var_11 = (_Bool)0;
_Bool var_14 = (_Bool)1;
int zero = 0;
short var_16 = (short)-26494;
int var_17 = 1296614535;
unsigned short var_18 = (unsigned short)46474;
long long int var_19 = -1892011138270331275LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
