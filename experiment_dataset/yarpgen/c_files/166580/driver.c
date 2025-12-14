#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7717237066900273363ULL;
_Bool var_1 = (_Bool)0;
_Bool var_2 = (_Bool)1;
unsigned char var_7 = (unsigned char)42;
int var_8 = 1309793685;
int var_10 = 454030775;
short var_11 = (short)1729;
int zero = 0;
int var_12 = -753876930;
_Bool var_13 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
