#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 2002730450;
unsigned char var_1 = (unsigned char)37;
unsigned short var_2 = (unsigned short)60550;
signed char var_4 = (signed char)-1;
unsigned long long int var_6 = 11394768770041972184ULL;
unsigned int var_7 = 2723753614U;
unsigned char var_8 = (unsigned char)93;
unsigned short var_10 = (unsigned short)36731;
int zero = 0;
unsigned int var_11 = 2668242612U;
int var_12 = 171024890;
short var_13 = (short)1656;
short var_14 = (short)21995;
unsigned short var_15 = (unsigned short)48929;
signed char var_16 = (signed char)-41;
unsigned short var_17 = (unsigned short)38465;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
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
