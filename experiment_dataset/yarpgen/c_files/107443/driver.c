#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
long long int var_2 = 3562090827854747886LL;
long long int var_7 = 7547795245548440417LL;
int zero = 0;
short var_15 = (short)9214;
long long int var_16 = 7181229167804920320LL;
int var_17 = 1296821475;
long long int var_18 = -2990031056669129444LL;
unsigned char var_19 = (unsigned char)10;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
