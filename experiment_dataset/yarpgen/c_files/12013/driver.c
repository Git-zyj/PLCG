#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)12324;
int var_4 = -887162609;
signed char var_8 = (signed char)100;
unsigned short var_15 = (unsigned short)4751;
int zero = 0;
unsigned long long int var_18 = 868129037426734851ULL;
int var_19 = 296845922;
unsigned char var_20 = (unsigned char)52;
unsigned short var_21 = (unsigned short)16255;
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
