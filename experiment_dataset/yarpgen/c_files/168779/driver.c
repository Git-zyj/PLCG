#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 11587828422720357865ULL;
_Bool var_7 = (_Bool)1;
unsigned short var_10 = (unsigned short)7049;
unsigned int var_12 = 1518645386U;
int zero = 0;
unsigned long long int var_13 = 13777317890250699281ULL;
signed char var_14 = (signed char)67;
void init() {
}

void checksum() {
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
