#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2669877463U;
unsigned short var_1 = (unsigned short)29386;
unsigned int var_2 = 2227496162U;
signed char var_3 = (signed char)39;
short var_4 = (short)25916;
unsigned int var_6 = 3995716045U;
short var_7 = (short)-757;
unsigned char var_8 = (unsigned char)181;
int zero = 0;
short var_10 = (short)10174;
unsigned char var_11 = (unsigned char)21;
short var_12 = (short)4390;
unsigned short var_13 = (unsigned short)12055;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
