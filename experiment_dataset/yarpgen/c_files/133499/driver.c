#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_1 = (signed char)46;
unsigned int var_2 = 4292043140U;
_Bool var_3 = (_Bool)1;
long long int var_4 = -3481023584822225642LL;
long long int var_7 = 1811091648535413354LL;
unsigned long long int var_9 = 5887582738240572150ULL;
short var_10 = (short)-27518;
int zero = 0;
unsigned short var_19 = (unsigned short)48783;
signed char var_20 = (signed char)14;
unsigned short var_21 = (unsigned short)3606;
void init() {
}

void checksum() {
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
