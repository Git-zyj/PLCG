#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)33381;
unsigned short var_1 = (unsigned short)6067;
unsigned int var_3 = 3318805585U;
unsigned int var_6 = 3023970588U;
unsigned int var_7 = 3558825983U;
unsigned short var_11 = (unsigned short)56291;
unsigned int var_12 = 2456725670U;
int zero = 0;
unsigned short var_13 = (unsigned short)60668;
unsigned short var_14 = (unsigned short)35105;
void init() {
}

void checksum() {
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
