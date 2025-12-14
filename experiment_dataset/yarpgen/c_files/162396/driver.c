#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-9054;
unsigned char var_5 = (unsigned char)152;
long long int var_6 = 7125079910735360763LL;
short var_9 = (short)-28258;
int zero = 0;
unsigned int var_10 = 249518667U;
signed char var_11 = (signed char)14;
_Bool var_12 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
