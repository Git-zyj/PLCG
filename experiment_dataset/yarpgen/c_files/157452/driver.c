#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
int var_4 = -1433166448;
unsigned int var_7 = 2021927445U;
_Bool var_8 = (_Bool)0;
int var_13 = -1653219200;
int zero = 0;
unsigned short var_14 = (unsigned short)44793;
int var_15 = 1170350725;
signed char var_16 = (signed char)-107;
void init() {
}

void checksum() {
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
