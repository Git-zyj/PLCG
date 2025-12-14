#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
int var_2 = 173808650;
unsigned int var_4 = 3576219238U;
_Bool var_9 = (_Bool)1;
int var_11 = 1666294379;
unsigned char var_14 = (unsigned char)131;
_Bool var_16 = (_Bool)0;
unsigned char var_17 = (unsigned char)139;
int zero = 0;
signed char var_20 = (signed char)-14;
unsigned char var_21 = (unsigned char)19;
void init() {
}

void checksum() {
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
