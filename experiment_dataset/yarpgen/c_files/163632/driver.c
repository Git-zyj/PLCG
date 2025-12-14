#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 8910615181540482473ULL;
unsigned long long int var_11 = 8450198020543528660ULL;
unsigned short var_13 = (unsigned short)60848;
int var_19 = 1322897944;
int zero = 0;
unsigned char var_20 = (unsigned char)100;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
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
