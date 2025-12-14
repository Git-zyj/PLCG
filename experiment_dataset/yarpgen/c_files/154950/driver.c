#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)48;
unsigned short var_3 = (unsigned short)9706;
_Bool var_6 = (_Bool)1;
int var_10 = 584308409;
int zero = 0;
unsigned short var_12 = (unsigned short)44400;
int var_13 = -260546999;
short var_14 = (short)1042;
void init() {
}

void checksum() {
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
