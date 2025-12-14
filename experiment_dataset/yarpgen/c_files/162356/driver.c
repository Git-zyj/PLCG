#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-30171;
unsigned short var_3 = (unsigned short)22213;
short var_4 = (short)26988;
int var_7 = 643017179;
int var_9 = -1787467915;
short var_10 = (short)-11260;
int var_18 = -2141958330;
int zero = 0;
int var_19 = 769664455;
unsigned char var_20 = (unsigned char)147;
unsigned long long int var_21 = 4612464750131113640ULL;
int var_22 = 643410348;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
