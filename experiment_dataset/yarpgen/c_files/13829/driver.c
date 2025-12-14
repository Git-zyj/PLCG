#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 1667487584U;
_Bool var_9 = (_Bool)0;
signed char var_18 = (signed char)97;
int zero = 0;
short var_20 = (short)-13925;
unsigned int var_21 = 3983785409U;
unsigned short var_22 = (unsigned short)42972;
unsigned short var_23 = (unsigned short)35338;
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
