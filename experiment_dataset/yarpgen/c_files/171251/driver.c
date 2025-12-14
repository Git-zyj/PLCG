#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1597235569U;
int var_3 = 1865039267;
unsigned int var_5 = 1045833963U;
int var_7 = 956498622;
unsigned short var_10 = (unsigned short)19376;
short var_12 = (short)26417;
unsigned short var_13 = (unsigned short)53855;
int zero = 0;
short var_14 = (short)-19785;
_Bool var_15 = (_Bool)1;
unsigned int var_16 = 3313317512U;
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
