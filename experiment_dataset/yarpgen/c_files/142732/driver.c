#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)46847;
unsigned int var_5 = 2670153716U;
unsigned int var_10 = 2383767855U;
unsigned short var_11 = (unsigned short)35573;
unsigned short var_12 = (unsigned short)16480;
unsigned int var_14 = 4152127918U;
unsigned short var_15 = (unsigned short)4936;
int var_16 = -395704413;
_Bool var_17 = (_Bool)0;
int zero = 0;
long long int var_18 = 5646011739830552579LL;
unsigned int var_19 = 2392957188U;
unsigned short var_20 = (unsigned short)43487;
long long int var_21 = 4303797857216198585LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
