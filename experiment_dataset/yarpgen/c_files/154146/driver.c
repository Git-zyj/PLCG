#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3367547726U;
long long int var_11 = -2173624023201210932LL;
_Bool var_13 = (_Bool)0;
int var_16 = -443912196;
int zero = 0;
short var_17 = (short)30909;
unsigned int var_18 = 915775300U;
signed char var_19 = (signed char)95;
signed char var_20 = (signed char)67;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
