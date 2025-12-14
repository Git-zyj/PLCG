#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)86;
int var_4 = -773902566;
long long int var_5 = 8872084034695209677LL;
int var_6 = 1725784845;
unsigned long long int var_7 = 6230386147556015802ULL;
unsigned int var_8 = 2218266313U;
int var_9 = -1207553505;
long long int var_10 = -2909548695118834135LL;
unsigned char var_11 = (unsigned char)10;
_Bool var_15 = (_Bool)1;
int zero = 0;
unsigned short var_17 = (unsigned short)35183;
signed char var_18 = (signed char)46;
signed char var_19 = (signed char)45;
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
