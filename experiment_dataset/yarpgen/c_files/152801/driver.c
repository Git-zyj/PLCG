#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
unsigned long long int var_7 = 18408227362163028692ULL;
unsigned short var_9 = (unsigned short)28590;
unsigned char var_10 = (unsigned char)229;
unsigned long long int var_12 = 5525509495720917557ULL;
unsigned char var_13 = (unsigned char)48;
int zero = 0;
unsigned long long int var_15 = 2411904762047326620ULL;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
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
