#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 154733673U;
int var_2 = -1562525453;
signed char var_5 = (signed char)-84;
unsigned char var_6 = (unsigned char)42;
long long int var_8 = -4777352892821491237LL;
unsigned int var_10 = 2649804137U;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned char var_12 = (unsigned char)209;
unsigned char var_13 = (unsigned char)207;
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
