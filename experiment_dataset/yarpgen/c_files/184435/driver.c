#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)1865;
_Bool var_2 = (_Bool)1;
unsigned int var_7 = 1195287272U;
signed char var_10 = (signed char)-47;
_Bool var_13 = (_Bool)0;
int zero = 0;
int var_14 = 15779478;
unsigned int var_15 = 2221193420U;
signed char var_16 = (signed char)57;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
