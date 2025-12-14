#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 7546851493256978375ULL;
long long int var_9 = -6474421326704317640LL;
short var_10 = (short)-18987;
unsigned int var_12 = 1871602838U;
unsigned char var_13 = (unsigned char)188;
int zero = 0;
unsigned long long int var_15 = 1133882480065882065ULL;
_Bool var_16 = (_Bool)1;
signed char var_17 = (signed char)104;
signed char var_18 = (signed char)-123;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
