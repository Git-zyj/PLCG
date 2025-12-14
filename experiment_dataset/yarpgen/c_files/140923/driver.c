#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 149049064;
unsigned short var_2 = (unsigned short)62938;
_Bool var_5 = (_Bool)1;
short var_6 = (short)18523;
_Bool var_10 = (_Bool)1;
int zero = 0;
unsigned short var_16 = (unsigned short)50470;
unsigned int var_17 = 3703074080U;
void init() {
}

void checksum() {
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
