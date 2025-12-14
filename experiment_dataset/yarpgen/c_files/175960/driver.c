#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_2 = (short)5712;
short var_3 = (short)-24618;
unsigned long long int var_4 = 18300502881377595794ULL;
unsigned long long int var_5 = 17232087055850338566ULL;
long long int var_8 = -651141184141896082LL;
short var_10 = (short)-9723;
_Bool var_11 = (_Bool)0;
int var_13 = 1605687827;
int zero = 0;
unsigned char var_14 = (unsigned char)132;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
