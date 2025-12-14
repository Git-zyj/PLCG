#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)48722;
short var_1 = (short)-23297;
_Bool var_3 = (_Bool)1;
short var_10 = (short)-26253;
int zero = 0;
unsigned int var_11 = 49593820U;
signed char var_12 = (signed char)-61;
void init() {
}

void checksum() {
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
