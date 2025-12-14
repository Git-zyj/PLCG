#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)34032;
signed char var_3 = (signed char)-53;
short var_8 = (short)-18147;
_Bool var_10 = (_Bool)1;
int zero = 0;
unsigned char var_20 = (unsigned char)38;
unsigned char var_21 = (unsigned char)214;
unsigned short var_22 = (unsigned short)6256;
_Bool var_23 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
