#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_3 = 1037784059U;
unsigned char var_4 = (unsigned char)36;
signed char var_10 = (signed char)-90;
int var_15 = -2104977887;
int zero = 0;
_Bool var_18 = (_Bool)0;
long long int var_19 = 62310691650975760LL;
unsigned long long int var_20 = 1446284664951908999ULL;
void init() {
}

void checksum() {
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
