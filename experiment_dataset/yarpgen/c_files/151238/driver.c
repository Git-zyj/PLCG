#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-16991;
unsigned long long int var_4 = 14040086943887725311ULL;
signed char var_8 = (signed char)-99;
unsigned long long int var_10 = 11720137544449797192ULL;
signed char var_11 = (signed char)34;
unsigned short var_12 = (unsigned short)10436;
int zero = 0;
short var_13 = (short)16040;
signed char var_14 = (signed char)82;
unsigned char var_15 = (unsigned char)42;
void init() {
}

void checksum() {
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
