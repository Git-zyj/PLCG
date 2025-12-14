#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)20406;
short var_1 = (short)-24605;
unsigned char var_2 = (unsigned char)210;
unsigned short var_3 = (unsigned short)53810;
long long int var_7 = 2314992724631311734LL;
unsigned short var_8 = (unsigned short)54034;
unsigned long long int var_14 = 3855716092054646918ULL;
int zero = 0;
unsigned short var_18 = (unsigned short)52504;
unsigned short var_19 = (unsigned short)10143;
int var_20 = -2111018363;
short var_21 = (short)-7614;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
