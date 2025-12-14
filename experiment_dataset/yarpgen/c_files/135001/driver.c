#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
signed char var_4 = (signed char)91;
signed char var_7 = (signed char)73;
long long int var_11 = 4966272833587474247LL;
unsigned short var_12 = (unsigned short)32220;
_Bool var_13 = (_Bool)0;
long long int var_14 = 6910482637361492719LL;
_Bool var_15 = (_Bool)1;
int zero = 0;
unsigned char var_17 = (unsigned char)228;
signed char var_18 = (signed char)-50;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
