#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)50;
unsigned int var_4 = 3781169739U;
_Bool var_5 = (_Bool)0;
int var_7 = -585187967;
unsigned int var_12 = 1047293084U;
int zero = 0;
unsigned int var_13 = 1225717147U;
long long int var_14 = 6831647215521356427LL;
_Bool var_15 = (_Bool)0;
unsigned int var_16 = 372865303U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
