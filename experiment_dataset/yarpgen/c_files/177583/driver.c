#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_7 = 336578969U;
short var_12 = (short)-20089;
unsigned short var_15 = (unsigned short)50978;
unsigned short var_18 = (unsigned short)62058;
_Bool var_19 = (_Bool)0;
int zero = 0;
short var_20 = (short)11752;
short var_21 = (short)-1449;
_Bool var_22 = (_Bool)1;
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
