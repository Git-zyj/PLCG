#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2391509346U;
_Bool var_4 = (_Bool)1;
unsigned short var_13 = (unsigned short)2156;
unsigned char var_18 = (unsigned char)223;
int zero = 0;
unsigned int var_19 = 225250484U;
short var_20 = (short)8819;
unsigned int var_21 = 3753712536U;
unsigned char var_22 = (unsigned char)20;
signed char var_23 = (signed char)77;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
