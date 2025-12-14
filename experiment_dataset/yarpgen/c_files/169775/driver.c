#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)16;
signed char var_2 = (signed char)-8;
unsigned char var_3 = (unsigned char)184;
signed char var_4 = (signed char)-54;
_Bool var_6 = (_Bool)1;
unsigned char var_8 = (unsigned char)142;
unsigned int var_9 = 1376713470U;
unsigned int var_10 = 289176867U;
int zero = 0;
unsigned char var_11 = (unsigned char)81;
unsigned char var_12 = (unsigned char)49;
unsigned short var_13 = (unsigned short)16288;
unsigned int var_14 = 451724808U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
