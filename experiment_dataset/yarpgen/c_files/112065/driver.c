#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1770660076;
_Bool var_4 = (_Bool)0;
signed char var_6 = (signed char)-89;
long long int var_7 = 4795329631185211498LL;
_Bool var_8 = (_Bool)1;
short var_13 = (short)-20150;
int zero = 0;
long long int var_19 = -5920188234447885588LL;
long long int var_20 = 2676136075674230235LL;
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
