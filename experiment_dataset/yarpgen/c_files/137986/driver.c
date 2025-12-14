#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)12463;
unsigned short var_2 = (unsigned short)46419;
unsigned short var_5 = (unsigned short)36420;
signed char var_6 = (signed char)-54;
_Bool var_7 = (_Bool)1;
int zero = 0;
unsigned int var_10 = 1559700476U;
unsigned int var_11 = 453747628U;
_Bool var_12 = (_Bool)1;
long long int var_13 = 7449434816387188198LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
