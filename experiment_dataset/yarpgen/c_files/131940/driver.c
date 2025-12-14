#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned int var_10 = 3947730290U;
unsigned char var_12 = (unsigned char)244;
unsigned int var_16 = 2196596512U;
unsigned char var_17 = (unsigned char)124;
int zero = 0;
signed char var_19 = (signed char)-120;
signed char var_20 = (signed char)5;
unsigned int var_21 = 2007359442U;
unsigned int var_22 = 874990511U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
