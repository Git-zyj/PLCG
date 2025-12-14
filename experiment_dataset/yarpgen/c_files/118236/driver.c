#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2734464056U;
_Bool var_2 = (_Bool)1;
unsigned char var_3 = (unsigned char)92;
short var_4 = (short)24671;
unsigned char var_6 = (unsigned char)50;
unsigned int var_8 = 3647086049U;
unsigned short var_10 = (unsigned short)51760;
short var_13 = (short)-16267;
signed char var_14 = (signed char)79;
int zero = 0;
unsigned int var_19 = 2702163997U;
unsigned int var_20 = 1633137796U;
short var_21 = (short)-17010;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
