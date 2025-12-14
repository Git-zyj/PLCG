#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2660854598U;
_Bool var_2 = (_Bool)1;
int var_4 = 1586416349;
unsigned long long int var_7 = 6775247700053289007ULL;
int var_8 = -1489562054;
signed char var_10 = (signed char)77;
int zero = 0;
int var_11 = 1117890251;
unsigned int var_12 = 902545123U;
void init() {
}

void checksum() {
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
