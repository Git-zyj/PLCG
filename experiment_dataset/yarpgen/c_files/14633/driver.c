#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1078258533;
int var_2 = 1373832094;
unsigned char var_3 = (unsigned char)63;
int var_4 = 2009064639;
_Bool var_6 = (_Bool)1;
unsigned char var_9 = (unsigned char)26;
long long int var_10 = 7035262769852618395LL;
int zero = 0;
long long int var_13 = -5485992321933807713LL;
unsigned char var_14 = (unsigned char)128;
int var_15 = -1138192160;
long long int var_16 = 4034580674083948616LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
