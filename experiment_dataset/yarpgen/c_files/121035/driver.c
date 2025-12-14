#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -1737617864;
unsigned short var_5 = (unsigned short)6486;
unsigned short var_11 = (unsigned short)18497;
unsigned int var_12 = 3212782395U;
_Bool var_15 = (_Bool)1;
int var_17 = 299815083;
unsigned short var_18 = (unsigned short)39165;
int zero = 0;
unsigned int var_19 = 2170769316U;
_Bool var_20 = (_Bool)1;
_Bool var_21 = (_Bool)0;
signed char var_22 = (signed char)-51;
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
