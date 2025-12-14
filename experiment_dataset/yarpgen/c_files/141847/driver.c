#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
_Bool var_3 = (_Bool)1;
short var_4 = (short)13350;
unsigned int var_7 = 1972949985U;
int var_8 = -1108095970;
unsigned short var_15 = (unsigned short)4617;
int zero = 0;
short var_16 = (short)21672;
unsigned int var_17 = 1085044086U;
_Bool var_18 = (_Bool)0;
long long int var_19 = -8051716143661607402LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
