#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)30180;
unsigned char var_1 = (unsigned char)116;
signed char var_2 = (signed char)-70;
_Bool var_5 = (_Bool)1;
unsigned char var_6 = (unsigned char)20;
unsigned char var_8 = (unsigned char)148;
_Bool var_9 = (_Bool)0;
int zero = 0;
unsigned long long int var_11 = 7153081900191828902ULL;
unsigned char var_12 = (unsigned char)79;
unsigned char var_13 = (unsigned char)99;
unsigned char var_14 = (unsigned char)246;
short var_15 = (short)-7263;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
