#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)60568;
_Bool var_5 = (_Bool)1;
unsigned int var_7 = 568496427U;
long long int var_8 = 932288306674694545LL;
unsigned int var_9 = 1431509905U;
int zero = 0;
signed char var_11 = (signed char)105;
_Bool var_12 = (_Bool)0;
short var_13 = (short)-16969;
int var_14 = -663495318;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
