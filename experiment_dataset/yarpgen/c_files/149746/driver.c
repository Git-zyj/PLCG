#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2260916185U;
unsigned int var_1 = 3165504780U;
signed char var_2 = (signed char)39;
_Bool var_4 = (_Bool)0;
signed char var_6 = (signed char)-120;
signed char var_8 = (signed char)-87;
unsigned short var_10 = (unsigned short)47931;
int zero = 0;
_Bool var_15 = (_Bool)1;
unsigned int var_16 = 3791614318U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
