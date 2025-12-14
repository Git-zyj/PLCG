#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_5 = -8940875284116902598LL;
long long int var_6 = -9210662393817783662LL;
unsigned char var_8 = (unsigned char)75;
signed char var_11 = (signed char)-113;
unsigned int var_12 = 1428328125U;
int zero = 0;
signed char var_15 = (signed char)105;
long long int var_16 = 6569776562207591408LL;
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
