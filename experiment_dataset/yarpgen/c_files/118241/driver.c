#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 127250960U;
signed char var_3 = (signed char)99;
_Bool var_9 = (_Bool)1;
unsigned char var_12 = (unsigned char)129;
_Bool var_13 = (_Bool)1;
_Bool var_14 = (_Bool)0;
int zero = 0;
short var_19 = (short)-21331;
unsigned long long int var_20 = 13878174113650641820ULL;
int var_21 = 2052857086;
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
