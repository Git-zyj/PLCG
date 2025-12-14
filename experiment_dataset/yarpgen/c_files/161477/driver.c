#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)16342;
unsigned char var_7 = (unsigned char)254;
unsigned int var_8 = 3268949725U;
unsigned short var_11 = (unsigned short)21148;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned int var_13 = 645445801U;
short var_14 = (short)-11709;
unsigned int var_15 = 1423473726U;
int var_16 = -1064151602;
void init() {
}

void checksum() {
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
