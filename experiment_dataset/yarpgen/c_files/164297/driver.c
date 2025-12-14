#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3878571048U;
signed char var_5 = (signed char)-3;
unsigned int var_6 = 3852942370U;
unsigned char var_8 = (unsigned char)115;
_Bool var_11 = (_Bool)0;
int zero = 0;
short var_14 = (short)21910;
_Bool var_15 = (_Bool)0;
unsigned int var_16 = 2329179487U;
void init() {
}

void checksum() {
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
