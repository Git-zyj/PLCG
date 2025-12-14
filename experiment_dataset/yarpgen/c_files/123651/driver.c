#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_8 = (unsigned char)148;
unsigned int var_9 = 203517520U;
unsigned int var_10 = 8469496U;
unsigned int var_16 = 3763234726U;
_Bool var_18 = (_Bool)1;
int zero = 0;
unsigned int var_20 = 3690940062U;
_Bool var_21 = (_Bool)0;
unsigned int var_22 = 1755520718U;
short var_23 = (short)-8210;
unsigned char var_24 = (unsigned char)203;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
