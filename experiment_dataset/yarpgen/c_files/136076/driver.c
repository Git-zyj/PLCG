#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3533526467U;
signed char var_4 = (signed char)81;
_Bool var_6 = (_Bool)1;
short var_8 = (short)-4635;
short var_12 = (short)-31640;
_Bool var_19 = (_Bool)0;
int zero = 0;
long long int var_20 = -7580729833061724003LL;
unsigned int var_21 = 1509182819U;
long long int var_22 = 8326283773360337132LL;
void init() {
}

void checksum() {
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
