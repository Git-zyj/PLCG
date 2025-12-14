#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-117;
_Bool var_2 = (_Bool)0;
signed char var_4 = (signed char)67;
signed char var_8 = (signed char)84;
signed char var_9 = (signed char)50;
int var_12 = 1249348545;
int var_13 = 1711495872;
int zero = 0;
int var_16 = -962374200;
int var_17 = -292194208;
_Bool var_18 = (_Bool)1;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
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
