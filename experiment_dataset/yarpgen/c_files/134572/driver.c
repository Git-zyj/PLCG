#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)243;
int var_4 = -1739481452;
short var_6 = (short)24166;
int var_8 = 2028956867;
_Bool var_9 = (_Bool)0;
unsigned short var_10 = (unsigned short)48088;
unsigned int var_11 = 166321256U;
int zero = 0;
short var_17 = (short)14763;
unsigned short var_18 = (unsigned short)51053;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
