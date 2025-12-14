#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)113;
unsigned char var_5 = (unsigned char)234;
long long int var_7 = 2301101244849713891LL;
short var_8 = (short)-11284;
short var_9 = (short)-24593;
unsigned char var_10 = (unsigned char)97;
long long int var_11 = -545025431619596451LL;
int zero = 0;
unsigned short var_14 = (unsigned short)57372;
unsigned short var_15 = (unsigned short)25118;
unsigned short var_16 = (unsigned short)13296;
long long int var_17 = -6335113514153760143LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
