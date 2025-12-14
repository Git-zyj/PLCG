#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-14;
long long int var_2 = -7135912826757343983LL;
_Bool var_5 = (_Bool)1;
_Bool var_6 = (_Bool)1;
int var_7 = 1690423699;
unsigned char var_8 = (unsigned char)137;
short var_9 = (short)-24867;
unsigned short var_10 = (unsigned short)64365;
unsigned long long int var_11 = 3738950931378276863ULL;
int zero = 0;
unsigned short var_12 = (unsigned short)48427;
short var_13 = (short)19570;
signed char var_14 = (signed char)-43;
short var_15 = (short)-17470;
unsigned char var_16 = (unsigned char)103;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
