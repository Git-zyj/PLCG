#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 4967748452046680546LL;
long long int var_2 = 2543236394989483302LL;
int var_3 = -1273854336;
int var_6 = 2100004200;
unsigned int var_8 = 2271595224U;
signed char var_12 = (signed char)-86;
unsigned int var_13 = 1412231873U;
int zero = 0;
_Bool var_15 = (_Bool)1;
unsigned short var_16 = (unsigned short)29865;
unsigned short var_17 = (unsigned short)20204;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
