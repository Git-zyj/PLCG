#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 399345837U;
long long int var_5 = 7290257922137441886LL;
long long int var_10 = 3578330393849342279LL;
_Bool var_11 = (_Bool)1;
unsigned int var_12 = 1836841198U;
unsigned long long int var_17 = 366737042845869250ULL;
int zero = 0;
signed char var_18 = (signed char)87;
unsigned char var_19 = (unsigned char)25;
long long int var_20 = 7780586103287957719LL;
int var_21 = -2010627504;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
