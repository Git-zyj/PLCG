#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-27373;
unsigned short var_6 = (unsigned short)4370;
unsigned char var_8 = (unsigned char)26;
_Bool var_10 = (_Bool)1;
int var_11 = -395064192;
long long int var_14 = -9017734307938625855LL;
unsigned int var_16 = 1265387207U;
int zero = 0;
unsigned char var_17 = (unsigned char)248;
unsigned char var_18 = (unsigned char)207;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
