#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 694704213;
_Bool var_2 = (_Bool)1;
long long int var_3 = -3448059362532294971LL;
short var_5 = (short)21073;
int zero = 0;
long long int var_19 = 3857303477991740774LL;
unsigned int var_20 = 3084618091U;
signed char var_21 = (signed char)-41;
void init() {
}

void checksum() {
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
