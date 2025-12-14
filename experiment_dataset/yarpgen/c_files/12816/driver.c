#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-21;
unsigned int var_2 = 1684805288U;
unsigned char var_4 = (unsigned char)243;
unsigned char var_7 = (unsigned char)5;
unsigned int var_8 = 123805212U;
unsigned char var_9 = (unsigned char)26;
unsigned short var_11 = (unsigned short)49206;
_Bool var_12 = (_Bool)0;
int zero = 0;
unsigned char var_13 = (unsigned char)123;
unsigned int var_14 = 1323031071U;
void init() {
}

void checksum() {
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
