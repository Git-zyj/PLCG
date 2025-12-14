#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)21374;
long long int var_4 = -5242638327694310486LL;
int var_8 = -745173412;
unsigned int var_11 = 1778573254U;
int var_13 = -1114325110;
int var_17 = 1154925191;
unsigned long long int var_18 = 17453959168150276251ULL;
int zero = 0;
_Bool var_19 = (_Bool)1;
unsigned short var_20 = (unsigned short)24919;
unsigned short var_21 = (unsigned short)44901;
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
