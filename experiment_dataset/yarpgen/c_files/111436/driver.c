#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = 38092401;
short var_7 = (short)-12458;
_Bool var_9 = (_Bool)0;
short var_12 = (short)-7472;
int var_13 = 166883855;
int var_16 = -1452725312;
int zero = 0;
short var_20 = (short)-30955;
unsigned char var_21 = (unsigned char)235;
unsigned long long int var_22 = 2651394148949911138ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
