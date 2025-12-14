#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)19510;
_Bool var_4 = (_Bool)1;
_Bool var_5 = (_Bool)0;
signed char var_7 = (signed char)115;
short var_8 = (short)-31271;
long long int var_10 = -5139017769348327277LL;
int zero = 0;
short var_13 = (short)21374;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
