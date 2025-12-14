#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)6585;
unsigned short var_9 = (unsigned short)19027;
unsigned int var_12 = 596007886U;
signed char var_13 = (signed char)115;
unsigned int var_17 = 303565718U;
int zero = 0;
_Bool var_18 = (_Bool)1;
long long int var_19 = 4657602199237181089LL;
unsigned short var_20 = (unsigned short)13791;
_Bool var_21 = (_Bool)0;
unsigned int var_22 = 2425601746U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
