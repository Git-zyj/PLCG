#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 414247995U;
signed char var_3 = (signed char)-75;
unsigned int var_5 = 2190852027U;
short var_7 = (short)-12173;
int zero = 0;
_Bool var_10 = (_Bool)1;
signed char var_11 = (signed char)76;
long long int var_12 = -7856865510466614525LL;
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
