#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1507524121U;
_Bool var_6 = (_Bool)0;
signed char var_7 = (signed char)7;
unsigned short var_10 = (unsigned short)47679;
int zero = 0;
unsigned int var_12 = 2117615735U;
_Bool var_13 = (_Bool)1;
signed char var_14 = (signed char)-14;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
