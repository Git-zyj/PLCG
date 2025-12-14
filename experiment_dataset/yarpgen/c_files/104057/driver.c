#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)20699;
unsigned long long int var_4 = 16817775971588700628ULL;
short var_8 = (short)-19786;
short var_12 = (short)-28926;
unsigned long long int var_13 = 17289253457793999508ULL;
int zero = 0;
unsigned long long int var_14 = 9721963945388384267ULL;
unsigned char var_15 = (unsigned char)42;
_Bool var_16 = (_Bool)1;
unsigned char var_17 = (unsigned char)252;
unsigned short var_18 = (unsigned short)35057;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
