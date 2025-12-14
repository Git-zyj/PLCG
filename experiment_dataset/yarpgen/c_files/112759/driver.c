#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)37431;
unsigned char var_12 = (unsigned char)175;
unsigned int var_13 = 3745091249U;
int zero = 0;
int var_20 = 283946833;
unsigned short var_21 = (unsigned short)11191;
signed char var_22 = (signed char)12;
short var_23 = (short)20790;
unsigned short var_24 = (unsigned short)42897;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
