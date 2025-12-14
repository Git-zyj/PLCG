#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned int var_6 = 2278132898U;
signed char var_7 = (signed char)-31;
short var_15 = (short)15031;
int zero = 0;
unsigned char var_16 = (unsigned char)107;
_Bool var_17 = (_Bool)1;
unsigned long long int var_18 = 4873153907958353831ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
