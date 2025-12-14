#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_1 = 6450900254726937259LL;
int var_2 = -407728964;
short var_3 = (short)-3949;
_Bool var_4 = (_Bool)0;
unsigned short var_5 = (unsigned short)13670;
unsigned char var_8 = (unsigned char)196;
unsigned short var_10 = (unsigned short)20157;
long long int var_11 = -4172756442816395530LL;
unsigned short var_12 = (unsigned short)24885;
int zero = 0;
long long int var_13 = 7077226056332717086LL;
int var_14 = -2111340760;
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
