#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = 1973542864;
unsigned int var_10 = 1948361799U;
unsigned int var_11 = 668155745U;
unsigned short var_12 = (unsigned short)19685;
short var_14 = (short)-18711;
_Bool var_17 = (_Bool)1;
int zero = 0;
unsigned int var_19 = 3084582827U;
unsigned short var_20 = (unsigned short)45819;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
