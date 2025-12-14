#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_1 = (_Bool)0;
unsigned int var_2 = 1842714127U;
unsigned int var_3 = 3512806343U;
int var_5 = -647310627;
unsigned int var_6 = 2679191462U;
unsigned char var_7 = (unsigned char)130;
int zero = 0;
unsigned long long int var_10 = 331512531668736005ULL;
unsigned int var_11 = 3340733372U;
short var_12 = (short)-28095;
unsigned char var_13 = (unsigned char)225;
short var_14 = (short)-10486;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
