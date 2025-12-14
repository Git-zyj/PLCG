#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1998347830;
_Bool var_3 = (_Bool)0;
unsigned int var_8 = 3602461456U;
unsigned int var_10 = 3560095074U;
int zero = 0;
int var_17 = -1825946814;
unsigned char var_18 = (unsigned char)64;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
