#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)74;
_Bool var_2 = (_Bool)0;
unsigned int var_5 = 2610009213U;
unsigned short var_6 = (unsigned short)34347;
unsigned char var_7 = (unsigned char)95;
unsigned long long int var_8 = 15378719275695986497ULL;
int var_9 = -285090873;
int zero = 0;
unsigned char var_11 = (unsigned char)248;
long long int var_12 = 5071363926173610243LL;
_Bool var_13 = (_Bool)1;
long long int var_14 = -6161830277917646161LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
