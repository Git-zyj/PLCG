#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)191;
unsigned short var_2 = (unsigned short)25566;
_Bool var_3 = (_Bool)0;
signed char var_5 = (signed char)69;
unsigned int var_10 = 2150789811U;
unsigned char var_11 = (unsigned char)246;
int zero = 0;
signed char var_16 = (signed char)53;
long long int var_17 = 8377479814429500710LL;
signed char var_18 = (signed char)56;
short var_19 = (short)16702;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
