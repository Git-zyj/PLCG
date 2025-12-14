#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)26378;
unsigned int var_2 = 2881751779U;
long long int var_3 = -6633074840826837881LL;
signed char var_7 = (signed char)-86;
unsigned short var_10 = (unsigned short)7471;
int var_11 = -128217669;
unsigned int var_12 = 3153386661U;
int zero = 0;
unsigned int var_14 = 1414542999U;
unsigned short var_15 = (unsigned short)28695;
void init() {
}

void checksum() {
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
