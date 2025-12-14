#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3154502842U;
unsigned long long int var_5 = 1167058447860033143ULL;
unsigned long long int var_6 = 10669393094350120614ULL;
unsigned long long int var_9 = 6087932339465770188ULL;
unsigned long long int var_10 = 14509715435337441781ULL;
int var_11 = 1034910068;
int zero = 0;
unsigned char var_15 = (unsigned char)62;
unsigned short var_16 = (unsigned short)61039;
short var_17 = (short)-29320;
unsigned long long int var_18 = 245755379974924941ULL;
short var_19 = (short)4381;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
