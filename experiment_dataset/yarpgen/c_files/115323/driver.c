#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1789384106;
short var_2 = (short)-15997;
unsigned long long int var_3 = 11348567009195753240ULL;
unsigned int var_5 = 635671285U;
_Bool var_8 = (_Bool)0;
_Bool var_10 = (_Bool)0;
unsigned short var_11 = (unsigned short)18268;
int zero = 0;
unsigned char var_12 = (unsigned char)226;
unsigned long long int var_13 = 6567570302610243107ULL;
unsigned short var_14 = (unsigned short)11116;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
