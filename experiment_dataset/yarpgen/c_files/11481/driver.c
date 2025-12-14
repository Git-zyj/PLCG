#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-101;
unsigned int var_1 = 1361113709U;
unsigned short var_2 = (unsigned short)59929;
signed char var_4 = (signed char)96;
_Bool var_5 = (_Bool)0;
unsigned char var_8 = (unsigned char)74;
int zero = 0;
unsigned char var_11 = (unsigned char)10;
unsigned short var_12 = (unsigned short)34824;
unsigned long long int var_13 = 15991632326700623122ULL;
signed char var_14 = (signed char)115;
signed char var_15 = (signed char)22;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
