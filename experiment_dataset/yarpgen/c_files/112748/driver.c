#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-101;
signed char var_5 = (signed char)-119;
unsigned short var_6 = (unsigned short)47507;
unsigned short var_8 = (unsigned short)43197;
long long int var_11 = 8962477789400387771LL;
unsigned int var_12 = 2232572630U;
int var_14 = -1100750315;
int zero = 0;
int var_15 = 671213368;
unsigned int var_16 = 1336639891U;
unsigned char var_17 = (unsigned char)177;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
