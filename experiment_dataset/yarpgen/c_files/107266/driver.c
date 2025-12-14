#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_11 = (signed char)-86;
short var_16 = (short)8768;
int zero = 0;
_Bool var_19 = (_Bool)1;
long long int var_20 = -1849482403536309656LL;
unsigned short var_21 = (unsigned short)60489;
unsigned int var_22 = 75144683U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
