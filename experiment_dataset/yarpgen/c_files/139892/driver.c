#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = 2059687159;
_Bool var_7 = (_Bool)0;
unsigned short var_10 = (unsigned short)3759;
long long int var_12 = -4398113689966335692LL;
int var_15 = -2033136670;
int zero = 0;
long long int var_16 = -1284042424721899617LL;
int var_17 = 1901014942;
void init() {
}

void checksum() {
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
