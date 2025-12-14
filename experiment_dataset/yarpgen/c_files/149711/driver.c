#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_5 = 3061335643U;
unsigned long long int var_8 = 16119514771434593682ULL;
int var_15 = 579142215;
signed char var_16 = (signed char)-34;
int zero = 0;
int var_19 = 1761890391;
unsigned long long int var_20 = 6240628636607960810ULL;
unsigned int var_21 = 308906080U;
unsigned int var_22 = 237598662U;
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
