#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5666395401571624636LL;
signed char var_2 = (signed char)-43;
unsigned char var_6 = (unsigned char)78;
unsigned long long int var_12 = 10254503573852120747ULL;
unsigned long long int var_15 = 17722763362586308481ULL;
short var_16 = (short)-16566;
unsigned int var_18 = 677106063U;
int zero = 0;
unsigned short var_19 = (unsigned short)62771;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
