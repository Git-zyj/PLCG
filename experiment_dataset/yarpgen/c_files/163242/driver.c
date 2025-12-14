#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)35210;
unsigned char var_1 = (unsigned char)192;
unsigned char var_4 = (unsigned char)129;
_Bool var_6 = (_Bool)1;
unsigned long long int var_7 = 7366930189659402601ULL;
int var_10 = -170582087;
int zero = 0;
int var_11 = -1597233398;
signed char var_12 = (signed char)-5;
unsigned int var_13 = 940628259U;
void init() {
}

void checksum() {
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
