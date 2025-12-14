#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)1998;
long long int var_6 = 3777997636940663994LL;
unsigned short var_7 = (unsigned short)43729;
signed char var_14 = (signed char)13;
int zero = 0;
unsigned long long int var_17 = 6393912041211457460ULL;
int var_18 = 798192082;
short var_19 = (short)-12717;
void init() {
}

void checksum() {
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
