#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 338123291U;
unsigned char var_6 = (unsigned char)113;
int var_7 = 644310310;
_Bool var_8 = (_Bool)1;
signed char var_10 = (signed char)46;
unsigned int var_12 = 2409114545U;
unsigned int var_15 = 4008889217U;
int zero = 0;
_Bool var_17 = (_Bool)1;
long long int var_18 = -5575046037596772577LL;
int var_19 = -1045009452;
void init() {
}

void checksum() {
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
