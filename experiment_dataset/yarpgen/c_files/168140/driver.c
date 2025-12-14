#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
long long int var_6 = 532417017378581085LL;
short var_7 = (short)24550;
signed char var_8 = (signed char)19;
short var_12 = (short)22628;
unsigned long long int var_14 = 1226328385699977521ULL;
int zero = 0;
unsigned long long int var_15 = 2641897800822139402ULL;
short var_16 = (short)-29498;
unsigned long long int var_17 = 9073087484645120549ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
