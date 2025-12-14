#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)146;
short var_4 = (short)-18053;
short var_7 = (short)14111;
int var_11 = -281133796;
int zero = 0;
unsigned int var_12 = 2938250625U;
_Bool var_13 = (_Bool)1;
unsigned short var_14 = (unsigned short)62698;
unsigned long long int var_15 = 7942678024038774839ULL;
short var_16 = (short)-21951;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
