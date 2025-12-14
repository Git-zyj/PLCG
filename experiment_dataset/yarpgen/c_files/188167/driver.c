#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned char var_5 = (unsigned char)71;
short var_6 = (short)11500;
unsigned int var_9 = 543623489U;
short var_11 = (short)-28693;
int zero = 0;
short var_12 = (short)-12731;
unsigned char var_13 = (unsigned char)69;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
