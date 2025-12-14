#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 427222100U;
unsigned int var_4 = 2498506640U;
_Bool var_12 = (_Bool)1;
signed char var_13 = (signed char)3;
unsigned int var_14 = 1303965806U;
int zero = 0;
_Bool var_15 = (_Bool)0;
signed char var_16 = (signed char)101;
short var_17 = (short)-29877;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
