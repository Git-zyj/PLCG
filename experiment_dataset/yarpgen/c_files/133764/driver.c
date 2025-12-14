#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
_Bool var_3 = (_Bool)0;
signed char var_4 = (signed char)-127;
short var_5 = (short)29226;
int zero = 0;
long long int var_10 = 5773174822482366700LL;
unsigned short var_11 = (unsigned short)22603;
unsigned long long int var_12 = 6849550289565871983ULL;
int var_13 = -1387156335;
unsigned short var_14 = (unsigned short)13517;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
