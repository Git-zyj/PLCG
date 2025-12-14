#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1849394276;
_Bool var_1 = (_Bool)1;
_Bool var_3 = (_Bool)1;
unsigned char var_4 = (unsigned char)124;
unsigned char var_6 = (unsigned char)179;
unsigned long long int var_7 = 3532543050930559330ULL;
int var_8 = 1797518842;
int zero = 0;
_Bool var_13 = (_Bool)0;
unsigned char var_14 = (unsigned char)247;
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
