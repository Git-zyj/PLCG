#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)23840;
signed char var_2 = (signed char)109;
unsigned int var_5 = 483775512U;
signed char var_11 = (signed char)-43;
int zero = 0;
unsigned long long int var_20 = 3673542744704148865ULL;
unsigned int var_21 = 2195547882U;
int var_22 = 1650334930;
signed char var_23 = (signed char)111;
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
