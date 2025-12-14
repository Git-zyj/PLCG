#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned int var_4 = 1758673824U;
long long int var_5 = -7958706239832792511LL;
unsigned char var_6 = (unsigned char)21;
signed char var_10 = (signed char)-98;
_Bool var_12 = (_Bool)1;
unsigned int var_13 = 261790307U;
int zero = 0;
unsigned char var_18 = (unsigned char)20;
unsigned long long int var_19 = 2107210607437622675ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
