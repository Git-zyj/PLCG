#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)1;
unsigned long long int var_10 = 10263329010461365679ULL;
unsigned short var_12 = (unsigned short)42648;
unsigned char var_13 = (unsigned char)40;
unsigned long long int var_14 = 7275453245892469441ULL;
_Bool var_15 = (_Bool)0;
unsigned int var_16 = 3627386931U;
int zero = 0;
unsigned short var_18 = (unsigned short)1365;
int var_19 = -1961112392;
unsigned int var_20 = 651438669U;
unsigned int var_21 = 1087647388U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
