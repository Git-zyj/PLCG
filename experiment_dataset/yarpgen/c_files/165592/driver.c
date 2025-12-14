#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
signed char var_3 = (signed char)-6;
short var_4 = (short)-28584;
unsigned int var_5 = 3602242614U;
unsigned char var_6 = (unsigned char)173;
_Bool var_7 = (_Bool)1;
_Bool var_9 = (_Bool)1;
int zero = 0;
unsigned char var_11 = (unsigned char)41;
unsigned int var_12 = 2141853369U;
short var_13 = (short)-2686;
signed char var_14 = (signed char)53;
unsigned int var_15 = 916754067U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
