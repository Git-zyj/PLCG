#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3110505679U;
signed char var_4 = (signed char)33;
unsigned short var_5 = (unsigned short)19669;
signed char var_6 = (signed char)78;
unsigned char var_7 = (unsigned char)46;
unsigned int var_8 = 1699301381U;
long long int var_9 = -2010777590355295346LL;
unsigned long long int var_10 = 15040230477913360699ULL;
int zero = 0;
unsigned short var_11 = (unsigned short)55993;
unsigned char var_12 = (unsigned char)187;
int var_13 = 818401335;
long long int var_14 = 2391303094650868086LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
