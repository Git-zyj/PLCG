#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)5938;
short var_3 = (short)-11618;
signed char var_5 = (signed char)-6;
unsigned char var_6 = (unsigned char)230;
unsigned char var_7 = (unsigned char)22;
unsigned short var_12 = (unsigned short)54850;
int zero = 0;
_Bool var_13 = (_Bool)0;
unsigned int var_14 = 3932350625U;
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
