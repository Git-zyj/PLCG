#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_9 = 3788957729U;
unsigned int var_10 = 3709251851U;
unsigned short var_16 = (unsigned short)52804;
short var_19 = (short)3907;
int zero = 0;
unsigned short var_20 = (unsigned short)39776;
short var_21 = (short)-8768;
void init() {
}

void checksum() {
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
