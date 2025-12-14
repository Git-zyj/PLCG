#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)64358;
unsigned int var_2 = 71426300U;
unsigned int var_5 = 2012407453U;
signed char var_6 = (signed char)125;
unsigned long long int var_11 = 15204465139762201196ULL;
unsigned int var_15 = 4147964392U;
int zero = 0;
unsigned char var_19 = (unsigned char)66;
_Bool var_20 = (_Bool)1;
short var_21 = (short)13063;
long long int var_22 = -2096172084566819913LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
