#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-222;
unsigned short var_2 = (unsigned short)54300;
int var_3 = -816072447;
unsigned char var_4 = (unsigned char)107;
int var_5 = 775324564;
int var_10 = -992494341;
int zero = 0;
signed char var_11 = (signed char)17;
unsigned int var_12 = 230453597U;
signed char var_13 = (signed char)-94;
int var_14 = 156859368;
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
