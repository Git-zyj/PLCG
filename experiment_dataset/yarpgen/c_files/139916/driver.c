#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
unsigned int var_4 = 3958979039U;
int var_6 = 1231394241;
unsigned short var_9 = (unsigned short)60179;
unsigned int var_10 = 3801571318U;
_Bool var_18 = (_Bool)0;
int zero = 0;
unsigned char var_20 = (unsigned char)187;
signed char var_21 = (signed char)-35;
unsigned int var_22 = 2155266U;
unsigned char var_23 = (unsigned char)223;
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
