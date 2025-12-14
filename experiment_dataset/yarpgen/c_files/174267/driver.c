#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 286172253U;
unsigned int var_5 = 2797185648U;
signed char var_6 = (signed char)-22;
unsigned short var_7 = (unsigned short)47613;
_Bool var_10 = (_Bool)1;
int var_11 = 1426517851;
int var_15 = -1748640024;
unsigned int var_16 = 3577185585U;
int zero = 0;
unsigned short var_19 = (unsigned short)36755;
_Bool var_20 = (_Bool)0;
unsigned short var_21 = (unsigned short)18163;
int var_22 = -1111821179;
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
