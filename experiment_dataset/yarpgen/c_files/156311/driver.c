#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned short var_4 = (unsigned short)21775;
unsigned int var_12 = 3147711261U;
long long int var_14 = 6082631071327093186LL;
short var_15 = (short)-10436;
int zero = 0;
signed char var_20 = (signed char)-27;
long long int var_21 = -438686751176800478LL;
unsigned long long int var_22 = 59136513813287842ULL;
_Bool var_23 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
