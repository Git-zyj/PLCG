#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_7 = 528543414;
_Bool var_8 = (_Bool)0;
unsigned int var_10 = 1541580635U;
_Bool var_11 = (_Bool)0;
short var_12 = (short)5752;
int zero = 0;
signed char var_13 = (signed char)65;
int var_14 = 397333505;
signed char var_15 = (signed char)-44;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
