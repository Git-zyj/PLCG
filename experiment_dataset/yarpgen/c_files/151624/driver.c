#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -7015037767312101418LL;
unsigned short var_4 = (unsigned short)60743;
unsigned char var_7 = (unsigned char)154;
signed char var_12 = (signed char)-31;
unsigned short var_13 = (unsigned short)36857;
int zero = 0;
unsigned int var_15 = 310784764U;
unsigned short var_16 = (unsigned short)45222;
unsigned short var_17 = (unsigned short)54855;
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
