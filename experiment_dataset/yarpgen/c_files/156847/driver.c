#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5858406891419987722ULL;
unsigned int var_3 = 1370843696U;
signed char var_4 = (signed char)-6;
unsigned char var_6 = (unsigned char)248;
_Bool var_7 = (_Bool)1;
short var_8 = (short)13400;
unsigned short var_10 = (unsigned short)30105;
int zero = 0;
signed char var_11 = (signed char)-2;
unsigned short var_12 = (unsigned short)5462;
long long int var_13 = -8891691560350248059LL;
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
