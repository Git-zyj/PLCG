#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1550746003;
unsigned char var_2 = (unsigned char)80;
unsigned long long int var_3 = 14442808821380934531ULL;
_Bool var_4 = (_Bool)1;
_Bool var_5 = (_Bool)1;
unsigned long long int var_6 = 15425899752339433647ULL;
signed char var_8 = (signed char)126;
int zero = 0;
short var_10 = (short)-18606;
unsigned int var_11 = 2011874358U;
signed char var_12 = (signed char)72;
_Bool var_13 = (_Bool)1;
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
