#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 137674931;
int var_3 = -1879613562;
unsigned char var_4 = (unsigned char)39;
int var_5 = -933743499;
_Bool var_9 = (_Bool)0;
long long int var_12 = 4641634001603754461LL;
int var_13 = -1042852051;
_Bool var_17 = (_Bool)0;
int zero = 0;
unsigned char var_20 = (unsigned char)31;
short var_21 = (short)21065;
_Bool var_22 = (_Bool)0;
short var_23 = (short)-15480;
unsigned int var_24 = 449981623U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
