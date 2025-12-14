#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -886296417;
_Bool var_6 = (_Bool)0;
unsigned int var_9 = 1160270882U;
unsigned char var_14 = (unsigned char)7;
_Bool var_15 = (_Bool)1;
unsigned short var_16 = (unsigned short)12896;
int zero = 0;
long long int var_17 = 3904556072213659178LL;
unsigned short var_18 = (unsigned short)19826;
short var_19 = (short)13845;
unsigned int var_20 = 3763096172U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
