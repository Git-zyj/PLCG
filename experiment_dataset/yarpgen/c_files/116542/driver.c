#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)192;
short var_2 = (short)18692;
int var_5 = 1812095080;
signed char var_6 = (signed char)3;
unsigned char var_7 = (unsigned char)99;
_Bool var_9 = (_Bool)0;
int zero = 0;
int var_10 = -54055418;
_Bool var_11 = (_Bool)1;
unsigned char var_12 = (unsigned char)66;
_Bool var_13 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
