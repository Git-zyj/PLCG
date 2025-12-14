#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)40;
unsigned short var_1 = (unsigned short)13380;
long long int var_2 = -5487510469701321108LL;
int var_6 = 396392843;
unsigned long long int var_7 = 9511203571403053291ULL;
signed char var_8 = (signed char)-15;
_Bool var_10 = (_Bool)0;
unsigned long long int var_12 = 18375862919406205968ULL;
int zero = 0;
unsigned short var_14 = (unsigned short)28477;
long long int var_15 = -3220617542233494332LL;
unsigned short var_16 = (unsigned short)38776;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
