#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2093056023U;
unsigned int var_5 = 1058879614U;
short var_8 = (short)5081;
_Bool var_9 = (_Bool)1;
unsigned char var_11 = (unsigned char)158;
int zero = 0;
unsigned short var_12 = (unsigned short)56362;
unsigned int var_13 = 1596576523U;
int var_14 = -852021626;
long long int var_15 = 479995372146899091LL;
unsigned char var_16 = (unsigned char)206;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
