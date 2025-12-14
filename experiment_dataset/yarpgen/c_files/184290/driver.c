#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9949643076293630660ULL;
_Bool var_2 = (_Bool)0;
unsigned short var_4 = (unsigned short)5037;
unsigned long long int var_7 = 1021657220899227786ULL;
unsigned int var_8 = 1841063968U;
short var_10 = (short)11426;
int zero = 0;
unsigned int var_11 = 3358572219U;
_Bool var_12 = (_Bool)0;
short var_13 = (short)27512;
unsigned char var_14 = (unsigned char)232;
unsigned short var_15 = (unsigned short)53538;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
