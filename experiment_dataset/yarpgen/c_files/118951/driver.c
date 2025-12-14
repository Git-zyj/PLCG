#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)4052;
unsigned char var_4 = (unsigned char)11;
unsigned int var_5 = 1610406687U;
signed char var_7 = (signed char)-110;
int zero = 0;
long long int var_14 = -1944804042343438602LL;
signed char var_15 = (signed char)49;
void init() {
}

void checksum() {
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
