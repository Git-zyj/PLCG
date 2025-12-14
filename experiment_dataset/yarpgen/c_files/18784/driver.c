#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3413511002U;
unsigned int var_1 = 3315755536U;
unsigned int var_2 = 1583438159U;
_Bool var_7 = (_Bool)0;
unsigned int var_13 = 548433443U;
unsigned int var_16 = 4077382774U;
int zero = 0;
unsigned int var_20 = 2836086119U;
_Bool var_21 = (_Bool)1;
unsigned int var_22 = 3290928700U;
unsigned int var_23 = 217588702U;
void init() {
}

void checksum() {
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
