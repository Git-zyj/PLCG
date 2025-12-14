#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)54824;
unsigned char var_9 = (unsigned char)203;
unsigned short var_10 = (unsigned short)49518;
_Bool var_12 = (_Bool)1;
unsigned int var_13 = 2670032716U;
signed char var_16 = (signed char)15;
int zero = 0;
int var_19 = 1015254444;
short var_20 = (short)-19821;
unsigned int var_21 = 472558108U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
