#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)50;
unsigned int var_1 = 672920225U;
signed char var_2 = (signed char)-71;
signed char var_3 = (signed char)118;
long long int var_5 = -1270700351723042750LL;
_Bool var_7 = (_Bool)0;
unsigned char var_10 = (unsigned char)255;
int var_12 = -672116257;
unsigned int var_13 = 2073952055U;
unsigned char var_14 = (unsigned char)199;
int zero = 0;
signed char var_16 = (signed char)48;
unsigned char var_17 = (unsigned char)25;
signed char var_18 = (signed char)115;
signed char var_19 = (signed char)-15;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
