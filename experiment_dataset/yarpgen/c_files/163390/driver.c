#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
signed char var_4 = (signed char)-126;
unsigned char var_5 = (unsigned char)73;
unsigned char var_9 = (unsigned char)83;
_Bool var_11 = (_Bool)1;
unsigned char var_12 = (unsigned char)228;
int zero = 0;
signed char var_13 = (signed char)85;
signed char var_14 = (signed char)90;
int var_15 = 407985685;
unsigned long long int var_16 = 8205211337314306189ULL;
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
