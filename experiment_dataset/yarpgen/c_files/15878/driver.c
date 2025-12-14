#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned char var_2 = (unsigned char)152;
_Bool var_6 = (_Bool)0;
unsigned short var_12 = (unsigned short)58690;
short var_13 = (short)-2689;
int var_14 = 877483153;
short var_15 = (short)-5639;
int zero = 0;
unsigned long long int var_17 = 17536359016357368188ULL;
unsigned short var_18 = (unsigned short)29803;
_Bool var_19 = (_Bool)1;
int var_20 = -817073165;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
