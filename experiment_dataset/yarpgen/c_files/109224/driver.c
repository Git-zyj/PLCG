#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 879108562U;
short var_3 = (short)-8191;
unsigned short var_5 = (unsigned short)28045;
unsigned char var_10 = (unsigned char)64;
short var_11 = (short)26895;
short var_14 = (short)21307;
int zero = 0;
_Bool var_16 = (_Bool)0;
unsigned char var_17 = (unsigned char)99;
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
