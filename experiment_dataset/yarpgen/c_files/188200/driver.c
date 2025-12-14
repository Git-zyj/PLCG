#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8802824647332573117ULL;
unsigned int var_4 = 3291266374U;
unsigned char var_5 = (unsigned char)206;
unsigned short var_6 = (unsigned short)65263;
unsigned int var_7 = 1860689271U;
signed char var_11 = (signed char)65;
unsigned int var_12 = 2835109078U;
unsigned char var_14 = (unsigned char)164;
int zero = 0;
int var_15 = -643517068;
signed char var_16 = (signed char)80;
unsigned int var_17 = 3690226142U;
short var_18 = (short)-3922;
short var_19 = (short)2023;
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
