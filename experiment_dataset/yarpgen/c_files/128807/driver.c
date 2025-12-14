#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 2934293373U;
unsigned int var_8 = 1816562907U;
unsigned short var_9 = (unsigned short)7669;
int zero = 0;
_Bool var_11 = (_Bool)0;
unsigned int var_12 = 4244163045U;
unsigned int var_13 = 347655087U;
_Bool var_14 = (_Bool)1;
unsigned short var_15 = (unsigned short)42085;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
