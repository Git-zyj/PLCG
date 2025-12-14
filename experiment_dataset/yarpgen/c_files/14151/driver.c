#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)44847;
unsigned int var_4 = 4069079666U;
long long int var_6 = 3677174537287312338LL;
unsigned short var_10 = (unsigned short)45227;
_Bool var_12 = (_Bool)0;
int zero = 0;
signed char var_13 = (signed char)75;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
