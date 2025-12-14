#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)120;
_Bool var_3 = (_Bool)0;
unsigned int var_5 = 695137190U;
_Bool var_6 = (_Bool)1;
unsigned long long int var_7 = 5974263686917373612ULL;
unsigned int var_9 = 599408367U;
signed char var_10 = (signed char)-7;
signed char var_11 = (signed char)97;
int zero = 0;
signed char var_20 = (signed char)-51;
unsigned int var_21 = 1335839446U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
