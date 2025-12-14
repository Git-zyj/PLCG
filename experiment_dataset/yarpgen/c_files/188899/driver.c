#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)218;
_Bool var_1 = (_Bool)1;
short var_2 = (short)-16587;
_Bool var_3 = (_Bool)1;
unsigned int var_6 = 29256403U;
long long int var_7 = -9016283563576851478LL;
unsigned int var_8 = 2800830319U;
_Bool var_9 = (_Bool)1;
short var_10 = (short)24294;
int zero = 0;
int var_11 = 597825026;
long long int var_12 = -856764440996332862LL;
unsigned char var_13 = (unsigned char)60;
unsigned char var_14 = (unsigned char)218;
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
